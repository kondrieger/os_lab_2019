#include <CUnit/Basic.h>
#include <stdio.h>
#include <string.h>

#include "revert_string.c"




void test2(void) {
  char empty_string[] = "";
  char big_string[] = "biggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg";

  RevertString(empty_string);
  CU_ASSERT_STRING_EQUAL_FATAL(empty_string, "");

  RevertString(big_string);
  CU_ASSERT_STRING_EQUAL_FATAL(big_string, "gggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggib");
}