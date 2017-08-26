#include <gtest/gtest.h>
#include "../abstractpb_types.h"
using namespace AbstractPB;

// model to use

struct MyType final : CObj
{
  CUInt64    timestamp;
  CUInt32    seconds;
  CUInt16    age;
  CInt32     dword;

  V_UInt32   nums;
};

// define test case class

class CIntTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
  }
};

// tests

TEST_F(CIntTest, AssignTestSet) {
  MyType t = MyType();

  // should not be set yet

  ASSERT_FALSE(t.timestamp.isSet());
  ASSERT_TRUE(t.timestamp.null());

  t.timestamp = 40000000L;

  // should now be SET

  ASSERT_TRUE(t.timestamp.isSet());
  ASSERT_FALSE(t.timestamp.null());

  // make sure this compiles

  uint64_t ts = t.timestamp;

}
