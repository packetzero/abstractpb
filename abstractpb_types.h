/*
 * All protobuf abstractions will only use types defined in this file.
 */

#ifndef _ABSTRACTPB_TYPES_H_
#define _ABSTRACTPB_TYPES_H_

#include <stdint.h>
#include <assert.h>

#include <string>
#ifdef _WIN32
#include <locale>  // wstring to string conversion
#include <codecvt>
#endif
#include <vector>
#include <map>
#include <string.h> // memcpy

#ifdef __APPLE__
#include <Foundation/Foundation.h>
#define STD_STRING(a) std::string([(a) UTF8String ])
#define NSTR(a) [ NSString stringWithUTF8String: (a).c_str() ]
#endif // APPLE

namespace AbstractPB
{
  // Base class for all non-vector types.  Mainly provides an isSet() method.

  struct CObj {
    CObj(bool val = false) : _isSet(val) {}
    bool isSet() const { return _isSet; }
    bool null() const { return !_isSet; }

  protected:
    bool _isSet;
  };

  // CPrim is templatize class that wraps a primitive value

  template <typename T>
  struct CPrim : CObj {
    CPrim(T _val) : CObj(true), val(_val) {}
    CPrim() : CObj() {}
    operator T() const { return v(); }
    T v() const {
      assert(isSet());
      return val;
    }

    T operator+(const T& other) { return T(val + other); }
    void operator=(const T& other) { _set(other); }
    void operator +=(const T& other) {
      val = v() + other; }
  protected:
    void _set(const T& other) { val = other; _isSet = true; }
    T val;
  };

  // String abstraction.
  // TODO: Shouldn't really be using CPrim for std::string, since it's not a primitive

  struct CString : CPrim<std::string> {
    CString() : CPrim<std::string>() { c = val.c_str();}
    CString(const std::string _val) : CPrim<std::string>(_val) { c = val.c_str();}

    const char *c;
    const char *c_str() const { return val.c_str(); }
    void operator= (const std::string& other) { _set(other); c = val.c_str(); }
    bool operator== (const std::string& other) { return val == other; }

#ifdef __APPLE__
    CString(NSString* _val) : CPrim(STD_STRING(_val)) { c = val.c_str(); }
    operator NSString *() const { return NSTR(v()); }
    void operator= (const NSString* other) { _set(STD_STRING(other)); }
    bool eq(const NSString* other) { return val == STD_STRING(other); }
#endif // _APPLE_

#ifdef _WIN32
    void operator= (const std::wstring& other) { _set(ws2s(other)); c = val.c_str(); }

    operator std::wstring() const { return v(); }

	std::wstring v() const {
      assert(isSet());
      return s2ws(val);
    }

	typedef std::codecvt_utf8<wchar_t> convert_typeX;

	std::wstring s2ws(const std::string& str) const
	{
		std::wstring_convert<convert_typeX, wchar_t> converterX;

		return converterX.from_bytes(str);
	}

	std::string ws2s(const std::wstring& wstr) const
	{
		std::wstring_convert<convert_typeX, wchar_t> converterX;

		return converterX.to_bytes(wstr);
	}
#endif // _WIN32

  };

  // bytes abstraction

  struct CBytes : CPrim< std::vector<uint8_t> > {
    CBytes() : CPrim< std::vector<uint8_t> >() {}
    CBytes(const std::string str) : CPrim< std::vector<uint8_t> >() {
      _isSet = true;
      val.resize(str.length());
      if (str.length() > 0) memcpy(val.data(),str.c_str(), str.length());
    }
    void operator= (const std::string& str) {
      _isSet = true;
      val.resize(str.length());
      if (str.length() > 0) memcpy(val.data(),str.c_str(), str.length());
    }
    uint32_t size() { return val.size(); }
    const uint8_t *ptr() { return val.data(); }
  };

  // primitive type wrappers

  typedef CPrim<uint8_t> CUInt8;
  typedef CPrim<int8_t> CInt8;
  typedef CPrim<uint16_t> CUInt16;
  typedef CPrim<int16_t> CInt16;
  typedef CPrim<uint32_t> CUInt32;
  typedef CPrim<int32_t> CInt32;
  typedef CPrim<uint64_t> CUInt64;
  typedef CPrim<int64_t> CInt64;
  typedef CPrim<bool> CBool;
  typedef CPrim<double> CDouble;
  typedef CPrim<float> CFloat;

  // vectors

  typedef std::vector<CString> V_String;
  typedef std::vector<int64_t> V_Int64;
  typedef std::vector<int32_t> V_Int32;
  typedef std::vector<int16_t> V_Int16;
  typedef std::vector<int8_t>  V_Int8;
  typedef std::vector<uint64_t> V_UInt64;
  typedef std::vector<uint32_t> V_UInt32;
  typedef std::vector<uint16_t> V_UInt16;
  typedef std::vector<uint8_t>  V_UInt8;
  typedef std::vector<bool>  V_Bool;
  typedef std::vector<double>  V_Double;
  typedef std::vector<float>  V_Float;
  typedef std::vector<CBytes> V_Bytes;

  #define VEC std::vector
}

#endif // _AbstractPB_TYPES_H_
