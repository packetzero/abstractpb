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

int main(int argc, char *argv[])
{
  doSomethingWithPaymentRequest();

  return 0;
}
