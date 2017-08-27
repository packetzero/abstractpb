// protoc-gen-cppabs: Generated from PaymentDetailsV3.proto for com.bitcoin.proto3
#include <abstractpb_types.h>
using namespace AbstractPB;

#ifndef _ABS_CPaymentDetails_H_
#define _ABS_CPaymentDetails_H_

struct CPaymentDetails final : CObj 
{
  
  CString                  network;
  VEC< COutput >           outputs;
  CUInt64                  time;
  CUInt64                  expires;
  CString                  memo;
  CString                  payment_url;
  CBytes                   merchant_data;
  
};
#endif // _ABS_CPaymentDetails_H_
