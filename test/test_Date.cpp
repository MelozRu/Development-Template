#include <gtest/gtest.h>
#include "DateHeader.h"

TEST(TestClassDate , Addintdate) {
  Date p1("05.09:1917");
  int i = 15;
  Date result("20.09:1917"); 
  const Date p_ = p1 + i;
  EXPECT_EQ(p_, result);
}
TEST(TestClassDate, subintdate) {
  Date p1("05.09:1917");
  int i = 15;
  Date result("20.08:1917");
  const Date p_ = p1 - i;
  EXPECT_EQ(p_, result);
}
TEST(TestClassDate, equaly) {
  Date p1("5.9:1917");
  Date p2("5.9:1917");
  bool i;
  if (p1 ==p2) {
    i = 1;
  }
  EXPECT_EQ(i, 1);
}
TEST(TestClassDate, more) {
  Date p1("6.9:1917");
  Date p2("5.9:1917");
  bool i;
  if (p1 > p2) {
    i = 1;
  }
  EXPECT_EQ(i, 1);
}
TEST(TestClassDate, less) {
  Date p1("4.9:1917");
  Date p2("6.9:1917");
  bool i;
  if (p1 < p2) {
    i = 1;
  }
  EXPECT_EQ(i, 1);
}
TEST(TestClassDate, twodatesassign) {
  Date p1("4.9:1984");
  Date p2("4.9:2000");
  Date result("4.9:2000");
  p1 = p2;
  EXPECT_EQ(p1, result);
}
TEST(TestClassDate, can_use_default_constructor) {
  Date p1;
  int i = 0;
  if ((p1.getDay() == 0) && (p1.getMonth() == 0) && (p1.getYear() == 0)) {
     i = 1;
  }
  EXPECT_EQ(i, 1);
}
TEST(TestClassDate, can_use_initializator_constructor) {
  int i = 0;
  Date p1("4.9:2000");
  if (((int)(p1.getDay()) == 4) && (p1.getMonth() == 9) && (p1.getYear() == 2000)) {
     i = 1;
  }
  EXPECT_EQ(i, 1);
}
TEST(TestClassDate, can_use_converter_constructor) {
  Date p1("2.4:2077"); 
  int k;
  if ((p1).stringdatemethod(p1) == "2.4:2077") {
    k = 1;
  }
  EXPECT_EQ(k, 1);
}
TEST(TestClassDate, GetDay) {
  Date p1("02.04:2076");
  int k;
  k = p1.getDay();
  EXPECT_EQ(k, 2);
}
TEST(TestClassDate, GetMonth) {
  Date p1("02.04:2076");
  int k;
  k = p1.getMonth();
  EXPECT_EQ(k, 4);
}
TEST(TestClassDate, GetYear) {
  Date p1("02.04:2076");
  int k;
  k = p1.getYear();
  EXPECT_EQ(k, 2076);
}