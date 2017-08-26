#include <gtest/gtest.h>
#include "../abstractpb_types.h"
using namespace AbstractPB;

// model to use

struct MyType final : CObj
{
  CString    name;
  V_String   friends;
};

// test values

static std::string name1 = "Hernando";
static const char *cname1 = name1.c_str();

static std::string name2 = "Kate";
static const char *cname2 = name2.c_str();

// define test case class

class StringsTest : public ::testing::Test {
 protected:
  virtual void SetUp() {

  }
};

// tests

TEST_F(StringsTest, AssignTestSet) {
  MyType t = MyType();

  // should not be set yet

  ASSERT_FALSE(t.name.isSet());
  ASSERT_TRUE(t.name.null());

  t.name = name1;

  // should now be SET

  ASSERT_TRUE(t.name.isSet());
  ASSERT_FALSE(t.name.null());

  // make sure this compiles

  std::string namo = t.name;

  ASSERT_EQ(name1, t.name.v());
  ASSERT_TRUE(strcmp(cname1, t.name.c) == 0);

  // expected falses

  ASSERT_FALSE(name2 == t.name.v());
  ASSERT_FALSE(strcmp(cname2, t.name.c) == 0);
}

#ifdef __APPLE__

TEST_F(StringsTest, NSStrings) {
  MyType t = MyType();
  t.name = @"Hernando";

  ASSERT_TRUE(t.name == name1);

  ASSERT_TRUE(t.name.eq(@"Hernando"));
}

#endif // __APPLE__
