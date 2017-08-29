// protoc-gen-cppabs: Generated from PaymentRequestV3.proto for com.bitcoin.proto3
#ifndef _ABS_PaymentRequestV3_H_
#define _ABS_PaymentRequestV3_H_

#include <abstractpb_types.h>
using namespace AbstractPB;

struct CPaymentRequest final : CObj 
{
  CUInt32                  payment_details_version;
  CString                  pki_type;
  CBytes                   pki_data;
  CBytes                   serialized_payment_details;
  CBytes                   signature;
};
#endif // _ABS_PaymentRequestV3_H_
