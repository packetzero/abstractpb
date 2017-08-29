// protoc-gen-cppabs: Generated from PaymentDetailsV3.proto for com.bitcoin.proto3
#ifndef _ABS_PaymentDetailsV3_H_
#define _ABS_PaymentDetailsV3_H_

#include <abstractpb_types.h>
using namespace AbstractPB;

struct CPaymentDetails final : CObj 
{
  CString                  network;
  VEC< COutput >           outputs;
  CUInt64                  time;
  CUInt64                  expires;
  CString                  memo;
  CString                  payment_url;
  CBytes                   merchant_data;
  CString                  someNewField;
  CInt32                   someNewInt;
};
#endif // _ABS_PaymentDetailsV3_H_
