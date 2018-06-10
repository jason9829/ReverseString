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

void test_StringLength_give_an_empty_string_expect_0(void)
{
  TEST_ASSERT_EQUAL(0, getStringLength(""));
}

 void test_StringLength_give_an_single_character_string_expect_1(void)
{
  TEST_ASSERT_EQUAL(1, getStringLength("f"));
}

void test_StringLength_give_framework_expect_9(void)
{
    TEST_ASSERT_EQUAL(9, getStringLength("framework"));
}

void test_StringLength_give_digits_expect_5(void)
{
  TEST_ASSERT_EQUAL(5, getStringLength("12345"));
}

void test_reverse_string_NULL_exptect_error(void)
{
    TEST_ASSERT_EQUAL_STRING("NULL or empty string detected.", ReverseString(NULL));
}

void test_reverse_string_Testing_expect_gnitseT(void)
{
    TEST_ASSERT_EQUAL_STRING("gnitseT", ReverseString("Testing"));
}
