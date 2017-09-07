#include "../abstractpb_types.h"
#include "apb/apb_to_pb.h"
#include "apb/apb_from_pb.h"

void doSomethingWithPaymentRequest()
{
  CPaymentRequest apb;

  apb.payment_details_version = 1;
  apb.pki_type = "some value here";

  std::string dest;
  bool success = to_pb_v3(apb, dest);

  printf("PaymentRequest serialization %s length:%d\n", (success?"SUCCESS":"FAILED"), (int)dest.length());

  CPaymentRequest apb2;
  CBytes data = CBytes(dest);
  data = dest;
  success = from_pb_v3(data, apb2);

  printf("Parse %s\n", (success?"SUCCESS":"FAILED"));

}

void doSomethingWithPaymentDetails()
{
  CPaymentDetails apb = CPaymentDetails();

#ifdef _WIN32
  // test wstring convenience methods
  apb.network = L"test";
  apb.memo = L"Some message here";
  std::wstring blah = apb.network;
#else
  apb.network = "test";
  apb.memo = "Some message here";
#endif

  // Attempt to serialize V2 protobuf ... should fail, missing required 'time' field

  std::string serializedPB;
  bool success = to_pb_v2(apb, serializedPB);
  assert(false == success);

  // Set required field, and serialize to V2, then V3 protobufs

  apb.time = 1590000000000000L;

  success = to_pb_v2(apb, serializedPB);        // this should succeed
  assert(success);
  success = to_pb_v3(apb, serializedPB);        // this should succeed as well
  assert(success);

  // deserialize from V3
  auto data = CBytes(serializedPB);

  CPaymentDetails readback;
  success = from_pb_v3(data, readback);
  assert(success);

  // apb and readback should have same field values
  assert(apb.time == readback.time);
  assert(apb.network == readback.network);
}

int main(int argc, char *argv[])
{
  doSomethingWithPaymentDetails();
  doSomethingWithPaymentRequest();

  return 0;
}
