// protoc-gen-cppabs: Generated from PaymentV3.proto for com.bitcoin.proto3
#ifndef _ABS_PaymentV3_H_
#define _ABS_PaymentV3_H_

#include <abstractpb_types.h>
using namespace AbstractPB;

enum TimeOfDay {
  NotSpecified                     = 0,
  AM                               = 1,
  PM                               = 2,
  NUM_TIMEOFDAY
};
struct CPayment final : CObj 
{
  CBytes                   merchant_data;
  V_Bytes                  transactions;
  VEC< COutput >           refund_to;
  CString                  memo;
  CPrim< TimeOfDay >       tod;
};
#endif // _ABS_PaymentV3_H_
