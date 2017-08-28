// protoc-gen-cppabs: Generated from PaymentAckV3.proto for com.bitcoin.proto3
#include <abstractpb_types.h>
using namespace AbstractPB;

#ifndef _ABS_CPaymentAck_H_
#define _ABS_CPaymentAck_H_

struct CPaymentAck final : CObj 
{
  CPayment*                payment;
  CString                  memo;
  CUInt64                  responseTime;
  
  ~CPaymentAck() {
    if (0L != payment) delete payment;
  }
};
#endif // _ABS_CPaymentAck_H_
