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

void test_reverse_empty_string__exptect_error(void)
{
    TEST_ASSERT_EQUAL_STRING("NULL or empty string detected.", ReverseString(""));
}


void test_reverse_string_Testing_expect_gnitseT(void)
{
    TEST_ASSERT_EQUAL_STRING("gnitseT", ReverseString("Testing"));
}

void test_reverse_string_9543_expect_3459(void)
{
    TEST_ASSERT_EQUAL_STRING ("3459", ReverseString("9543"));
}
void test_reverse_string_123456789_expect_987654321(void)
{
    TEST_ASSERT_EQUAL_STRING ("987654321", ReverseString("123456789"));
}

void test_reverse_string_Framework_expect_krowemarF(void)
{
    TEST_ASSERT_EQUAL_STRING("krowemarF", ReverseString("Framework"));
}
