#include "apb_to_pb.h"
#include <Output.pb.h>

void apb_init_pb_v2(COutput &apb, Output &pb)
{
  if (apb.amount.isSet()) pb.set_amount(apb.amount);
  
  if (apb.script.isSet()) pb.set_script(apb.script.ptr(), apb.script.size());
  
}

bool to_pb_v2(COutput &apb, std::string &dest)
{
  Output pb;
  
  apb_init_pb_v2(apb, pb);
  
  if (!pb.IsInitialized()) return false;
  
  return pb.SerializeToString(&dest);
}
#include <Payment.pb.h>

void apb_init_pb_v2(CPayment &apb, Payment &pb)
{
  if (apb.merchant_data.isSet()) pb.set_merchant_data(apb.merchant_data.ptr(), apb.merchant_data.size());
  
  for (auto it = apb.transactions.begin(); it != apb.transactions.end(); it++)
     pb.add_transactions(it->ptr(), it->size());  // V_Bytes
  
  for (auto it = apb.refund_to.begin(); it != apb.refund_to.end(); it++)
     apb_init_pb_v2(*it, *pb.add_refund_to());
  
  if (apb.memo.isSet()) pb.set_memo(apb.memo);
  
}

bool to_pb_v2(CPayment &apb, std::string &dest)
{
  Payment pb;
  
  apb_init_pb_v2(apb, pb);
  
  if (!pb.IsInitialized()) return false;
  
  return pb.SerializeToString(&dest);
}
#include <PaymentAck.pb.h>

void apb_init_pb_v2(CPaymentAck &apb, PaymentAck &pb)
{
  if (0L != apb.payment) apb_init_pb_v2(*apb.payment, *pb.mutable_payment());
  
  if (apb.memo.isSet()) pb.set_memo(apb.memo);
  
}

bool to_pb_v2(CPaymentAck &apb, std::string &dest)
{
  PaymentAck pb;
  
  apb_init_pb_v2(apb, pb);
  
  if (!pb.IsInitialized()) return false;
  
  return pb.SerializeToString(&dest);
}
#include <PaymentDetails.pb.h>

void apb_init_pb_v2(CPaymentDetails &apb, PaymentDetails &pb)
{
  if (apb.network.isSet()) pb.set_network(apb.network);
  
  for (auto it = apb.outputs.begin(); it != apb.outputs.end(); it++)
     apb_init_pb_v2(*it, *pb.add_outputs());
  
  if (apb.time.isSet()) pb.set_time(apb.time);
  
  if (apb.expires.isSet()) pb.set_expires(apb.expires);
  
  if (apb.memo.isSet()) pb.set_memo(apb.memo);
  
  if (apb.payment_url.isSet()) pb.set_payment_url(apb.payment_url);
  
  if (apb.merchant_data.isSet()) pb.set_merchant_data(apb.merchant_data.ptr(), apb.merchant_data.size());
  
}

bool to_pb_v2(CPaymentDetails &apb, std::string &dest)
{
  PaymentDetails pb;
  
  apb_init_pb_v2(apb, pb);
  
  if (!pb.IsInitialized()) return false;
  
  return pb.SerializeToString(&dest);
}
#include <PaymentRequest.pb.h>

void apb_init_pb_v2(CPaymentRequest &apb, PaymentRequest &pb)
{
  if (apb.payment_details_version.isSet()) pb.set_payment_details_version(apb.payment_details_version);
  
  if (apb.pki_type.isSet()) pb.set_pki_type(apb.pki_type);
  
  if (apb.pki_data.isSet()) pb.set_pki_data(apb.pki_data.ptr(), apb.pki_data.size());
  
  if (apb.serialized_payment_details.isSet()) pb.set_serialized_payment_details(apb.serialized_payment_details.ptr(), apb.serialized_payment_details.size());
  
  if (apb.signature.isSet()) pb.set_signature(apb.signature.ptr(), apb.signature.size());
  
}

bool to_pb_v2(CPaymentRequest &apb, std::string &dest)
{
  PaymentRequest pb;
  
  apb_init_pb_v2(apb, pb);
  
  if (!pb.IsInitialized()) return false;
  
  return pb.SerializeToString(&dest);
}
#include <OutputV3.pb.h>

void apb_init_pb_v3(COutput &apb, com::bitcoin::proto3::Output &pb)
{
  if (apb.amount.isSet()) pb.set_amount(apb.amount);
  
  if (apb.script.isSet()) pb.set_script(apb.script.ptr(), apb.script.size());
  
}

bool to_pb_v3(COutput &apb, std::string &dest)
{
  com::bitcoin::proto3::Output pb;
  
  apb_init_pb_v3(apb, pb);
  
  return pb.SerializeToString(&dest);
}
#include <PaymentV3.pb.h>

void apb_init_pb_v3(CPayment &apb, com::bitcoin::proto3::Payment &pb)
{
  if (apb.merchant_data.isSet()) pb.set_merchant_data(apb.merchant_data.ptr(), apb.merchant_data.size());
  
  for (auto it = apb.transactions.begin(); it != apb.transactions.end(); it++)
     pb.add_transactions(it->ptr(), it->size());  // V_Bytes
  
  for (auto it = apb.refund_to.begin(); it != apb.refund_to.end(); it++)
     apb_init_pb_v3(*it, *pb.add_refund_to());
  
  if (apb.memo.isSet()) pb.set_memo(apb.memo);
  
  if (apb.tod.isSet()) pb.set_tod((::com::bitcoin::proto3::TimeOfDay)apb.tod.v());
  
}

bool to_pb_v3(CPayment &apb, std::string &dest)
{
  com::bitcoin::proto3::Payment pb;
  
  apb_init_pb_v3(apb, pb);
  
  return pb.SerializeToString(&dest);
}
#include <PaymentAckV3.pb.h>

void apb_init_pb_v3(CPaymentAck &apb, com::bitcoin::proto3::PaymentAck &pb)
{
  if (0L != apb.payment) apb_init_pb_v3(*apb.payment, *pb.mutable_payment());
  
  if (apb.memo.isSet()) pb.set_memo(apb.memo);
  
  if (apb.responseTime.isSet()) pb.set_responsetime(apb.responseTime);
  
}

bool to_pb_v3(CPaymentAck &apb, std::string &dest)
{
  com::bitcoin::proto3::PaymentAck pb;
  
  apb_init_pb_v3(apb, pb);
  
  return pb.SerializeToString(&dest);
}
#include <PaymentDetailsV3.pb.h>

void apb_init_pb_v3(CPaymentDetails &apb, com::bitcoin::proto3::PaymentDetails &pb)
{
  if (apb.network.isSet()) pb.set_network(apb.network);
  
  for (auto it = apb.outputs.begin(); it != apb.outputs.end(); it++)
     apb_init_pb_v3(*it, *pb.add_outputs());
  
  if (apb.time.isSet()) pb.set_time(apb.time);
  
  if (apb.expires.isSet()) pb.set_expires(apb.expires);
  
  if (apb.memo.isSet()) pb.set_memo(apb.memo);
  
  if (apb.payment_url.isSet()) pb.set_payment_url(apb.payment_url);
  
  if (apb.merchant_data.isSet()) pb.set_merchant_data(apb.merchant_data.ptr(), apb.merchant_data.size());
  
  if (apb.someNewField.isSet()) pb.set_somenewfield(apb.someNewField);
  
  if (apb.someNewInt.isSet()) pb.set_somenewint(apb.someNewInt);
  
}

bool to_pb_v3(CPaymentDetails &apb, std::string &dest)
{
  com::bitcoin::proto3::PaymentDetails pb;
  
  apb_init_pb_v3(apb, pb);
  
  return pb.SerializeToString(&dest);
}
#include <PaymentRequestV3.pb.h>

void apb_init_pb_v3(CPaymentRequest &apb, com::bitcoin::proto3::PaymentRequest &pb)
{
  if (apb.payment_details_version.isSet()) pb.set_payment_details_version(apb.payment_details_version);
  
  if (apb.pki_type.isSet()) pb.set_pki_type(apb.pki_type);
  
  if (apb.pki_data.isSet()) pb.set_pki_data(apb.pki_data.ptr(), apb.pki_data.size());
  
  if (apb.serialized_payment_details.isSet()) pb.set_serialized_payment_details(apb.serialized_payment_details.ptr(), apb.serialized_payment_details.size());
  
  if (apb.signature.isSet()) pb.set_signature(apb.signature.ptr(), apb.signature.size());
  
}

bool to_pb_v3(CPaymentRequest &apb, std::string &dest)
{
  com::bitcoin::proto3::PaymentRequest pb;
  
  apb_init_pb_v3(apb, pb);
  
  return pb.SerializeToString(&dest);
}
