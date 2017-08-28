// protoc-gen-cppabs: Generated from PaymentV3.proto for com.bitcoin.proto3
#include <abstractpb_types.h>
using namespace AbstractPB;

#ifndef _ABS_CPayment_H_
#define _ABS_CPayment_H_

struct CPayment final : CObj 
{
  CBytes                   merchant_data;
  V_Bytes                  transactions;
  VEC< COutput >           refund_to;
  CString                  memo;
};
#endif // _ABS_CPayment_H_
