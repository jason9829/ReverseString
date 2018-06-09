#include "unity.h"
#include "ReverseString.h"


void setUp(void)
{
}

void tearDown(void)
{
}

void test_StringLength_a_NULL_expect_0(void)
{
  printf("size of an interger %d",sizeof(int));
  TEST_ASSERT_EQUAL(0, getStringLength(NULL));
}

void test_StringLength_a_give_an_empty_string_expect_0(void)
{
  TEST_ASSERT_EQUAL(0, getStringLength(""));
}

 void test_StringLength_a_give_an_single_character_string_expect_1(void)
{
  TEST_ASSERT_EQUAL(1, getStringLength("f"));
}
