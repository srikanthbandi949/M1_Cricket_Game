/**
 * @file handcrickettest.c
 * @author Srikanth Bandi
 * @brief 
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "./unity/unity.h"

/* Modify these two lines according to the project */
#include "handcricket.h"
#define PROJECT_NAME "Hand_Cricket"

/* Prototypes for all the test functions */
void test_PlayerToss(void);




/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */

  UNITY_BEGIN();

/* Run Test functions */

  RUN_TEST(test_PlayerToss);
  

  /* Close the Unity Test Framework */

  return UNITY_END();
}

/* Write all the test functions */ 
void test_PlayerToss(void) {
  TEST_ASSERT_EQUAL(7,PlayerToss("Dhoni","Virat",1));
  TEST_ASSERT_EQUAL(7,GetPlayerToss("Srikanth","Mahesh",1));
  
}