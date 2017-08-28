// protoc-gen-cppabs: Generated from PaymentRequestV3.proto for com.bitcoin.proto3
#include <abstractpb_types.h>
using namespace AbstractPB;

#ifndef _ABS_CPaymentRequest_H_
#define _ABS_CPaymentRequest_H_

struct CPaymentRequest final : CObj 
{
  CUInt32                  payment_details_version;
  CString                  pki_type;
  CBytes                   pki_data;
  CBytes                   serialized_payment_details;
  CBytes                   signature;
};
#endif // _ABS_CPaymentRequest_H_
