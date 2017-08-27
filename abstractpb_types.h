
#ifndef _ABSTRACTPB_TYPES_H_
#define _ABSTRACTPB_TYPES_H_

#include <stdint.h>

#include <string>
#include <stdexcept>
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
  struct CObj {
    CObj(bool val = false) : _isSet(val) {}
    bool isSet() const { return _isSet; }
    bool null() const { return !_isSet; }

  protected:
    bool _isSet;
  };

  template <typename T>
  struct CPrim : CObj {
    CPrim(T _val) : CObj(true), val(_val) {}
    CPrim() : CObj() {}
    operator T() const { return v(); }
    T v() const {
      if (null()) throw(std::runtime_error("accessing value that hasn't been set"));
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

  struct CString : CPrim<std::string> {
    CString() : CPrim() { c = val.c_str();}
    CString(const std::string _val) : CPrim(_val) { c = val.c_str();}

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

  };

  struct CBytes : CPrim< std::vector<uint8_t> > {
    CBytes() : CPrim() {}
    CBytes(const std::string str) : CPrim() {
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

  using CUInt8 = CPrim<uint8_t>;
  using CInt8 = CPrim<int8_t>;
  using CUInt16 = CPrim<uint16_t>;
  using CInt16 = CPrim<int16_t>;
  using CUInt32 = CPrim<uint32_t>;
  using CInt32 = CPrim<int32_t>;
  using CUInt64 = CPrim<uint64_t>;
  using CInt64 = CPrim<int64_t>;
  using CBool = CPrim<bool>;
  using CDouble = CPrim<double>;
  using CFloat = CPrim<float>;

  using V_String = std::vector<CString> ;
  using V_Int64  = std::vector<int64_t> ;
  using V_Int32  = std::vector<int32_t> ;
  using V_Int16  = std::vector<int16_t> ;
  using V_Int8   = std::vector<int8_t>  ;
  using V_UInt64 = std::vector<uint64_t> ;
  using V_UInt32 = std::vector<uint32_t> ;
  using V_UInt16 = std::vector<uint16_t> ;
  using V_UInt8  = std::vector<uint8_t>  ;
  using V_Bool   = std::vector<bool>  ;
  using V_Double = std::vector<double>  ;
  using V_Float  = std::vector<float>  ;
  using V_Bytes  = std::vector<CBytes> ;

  #define VEC std::vector

}

#endif // _AbstractPB_TYPES_H_
