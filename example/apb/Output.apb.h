// protoc-gen-cppabs: Generated from OutputV3.proto for com.bitcoin.proto3
#include <abstractpb_types.h>
using namespace AbstractPB;

#ifndef _ABS_COutput_H_
#define _ABS_COutput_H_

struct COutput final : CObj 
{
  
  CUInt64                  amount;
  CBytes                   script;
  
};
#endif // _ABS_COutput_H_
