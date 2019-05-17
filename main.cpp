#include <gtest/gtest.h>

enum Numbers { ONE = 1, TWO, THREE };

TEST(BasicTests, NumberCompare) {
  EXPECT_EQ(1, ONE);
  EXPECT_GT(TWO, THREE); // <- breakpoint, in 'Variables' expand "this" and invoke Show Memory View on "this->test_info_"
  EXPECT_TRUE(1 == 1);
}