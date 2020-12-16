#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, TrailingSpace) {
   char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "test"; test_val[2] = " ";
   EXPECT_EQ("test  ", echo(3,test_val));
}

TEST(EchoTest, LeadingSpace) {
   char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = " "; test_val[2] = "2spaces";
   EXPECT_EQ("  2spaces", echo(3,test_val));
}

TEST(EchoTest, SymbolCheck) {
   char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "h3!!o"; test_val[2] = "w@rld!";
   EXPECT_EQ("h3!!o w@rld!", echo(3,test_val));
}
   
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
