// protoc-gen-cppabs: Generated from PaymentAckV3.proto for com.bitcoin.proto3
#ifndef _ABS_PaymentAckV3_H_
#define _ABS_PaymentAckV3_H_

#include <abstractpb_types.h>
using namespace AbstractPB;

struct CPaymentAck final : CObj 
{
  CPayment*                payment;
  CString                  memo;
  CUInt64                  responseTime;
  
  ~CPaymentAck() {
    if (0L != payment) delete payment;
  }
};
#endif // _ABS_PaymentAckV3_H_
