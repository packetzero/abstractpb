// protoc-gen-cppabs: Generated from OutputV3.proto for com.bitcoin.proto3
#ifndef _ABS_OutputV3_H_
#define _ABS_OutputV3_H_

#include <abstractpb_types.h>
using namespace AbstractPB;

struct COutput final : CObj 
{
  CUInt64                  amount;
  CBytes                   script;
};
#endif // _ABS_OutputV3_H_
