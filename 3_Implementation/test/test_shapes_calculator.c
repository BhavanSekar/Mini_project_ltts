/**
 * @file test_shapes_calculator.c
 * @author S.Shruthi
 * @brief Tests the Shapes_Calculator application 
 * @version 0.1
 * @date 2021-07-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "unity.h"


regular_polygon *reg;
/*Required by the unity test framework*/
void setUp(){
}
/*Required by the unity test framework*/
void tearDown(){
}

/*Declaring the functions required to be called for testing the application*/
void test_regular_polygon_NULL(void);
void test_regular_polygon_SUCCESS(void);

void test_irregular_and_curves_NULL(void);
void test_irregular_and_curves_SUCCESS(void);

void test_three_dim_NULL(void);
void test_three_dim_SUCCESS(void);

void test_three_dim_other_NULL(void);
void test_three_dim_other_SUCCESS(void);



int main(void){

/* Initiate the Unity Test framework*/
UNITY_BEGIN();

/* Run test functions*/
RUN_TEST(test_regular_polygon_NULL);
RUN_TEST(test_regular_polygon_SUCCESS);
RUN_TEST(test_irregular_and_curves_NULL);
RUN_TEST(test_irregular_and_curves_SUCCESS);
RUN_TEST(test_three_dim_NULL);
RUN_TEST(test_three_dim_SUCCESS);
RUN_TEST(test_three_dim_other_NULL);
RUN_TEST(test_three_dim_other_SUCCESS);

/*Close the Unity Test framework*/
return UNITY_END();
}

//Definition of test function for NULL case
void test_regular_polygon_NULL(void){
    TEST_ASSERT_EQUAL(NULL,equilateral_triangle(0,&reg));
    TEST_ASSERT_EQUAL(NULL,square(0,&reg));
    TEST_ASSERT_EQUAL(NULL,pentagon(0,&reg));
    TEST_ASSERT_EQUAL(NULL,hexagon(0,&reg));
    TEST_ASSERT_EQUAL(NULL,heptagon(0,&reg));
    TEST_ASSERT_EQUAL(NULL,octagon(0,&reg));
    TEST_ASSERT_EQUAL(NULL,enneagon(0,&reg));
    TEST_ASSERT_EQUAL(NULL,decagon(0,&reg));
}


//Definition of test function for SUCCESS case
void test_regular_polygon_SUCCESS(void){
    
    regular_polygon *test = {9,3.89711,60.0,120.0};
    TEST_ASSERT_EQUAL(SUCCESS,equilateral_triangle(3,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);
    TEST_ASSERT_EQUAL(SUCCESS,equilateral_triangle(-3,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);

    regular_polygon *test = {20,25,90.0,90.0};
    TEST_ASSERT_EQUAL(SUCCESS,square(5,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);
    TEST_ASSERT_EQUAL(SUCCESS,square(-5,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);

    regular_polygon *test = {25,43.01194,108.0,72.0};
    TEST_ASSERT_EQUAL(SUCCESS,pentagon(5,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);
    TEST_ASSERT_EQUAL(SUCCESS,pentagon(-5,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);

    regular_polygon *test = {18,23.38269,120.0,60.0};
    TEST_ASSERT_EQUAL(SUCCESS,hexagon(3,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);
    TEST_ASSERT_EQUAL(SUCCESS,hexagon(-3,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);

    regular_polygon *test = {28,58.1426,128.57,51.43};
    TEST_ASSERT_EQUAL(SUCCESS,heptagon(4,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);
    TEST_ASSERT_EQUAL(SUCCESS,heptagon(-4,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);

    regular_polygon *test = {32,77.25483,135.0,45.0};
    TEST_ASSERT_EQUAL(SUCCESS,octagon(4,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);
    TEST_ASSERT_EQUAL(SUCCESS,octagon(-4,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);

    regular_polygon *test = {27,55.63642,140.0,40.0};
    TEST_ASSERT_EQUAL(SUCCESS,enneagon(3,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);
    TEST_ASSERT_EQUAL(SUCCESS,enneagon(-3,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);

    regular_polygon *test = {50,192.35522,144.0,36.0};
    TEST_ASSERT_EQUAL(SUCCESS,decagon(5,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);
    TEST_ASSERT_EQUAL(SUCCESS,decagon(-5,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);
}

//Definition of test function for NULL case
void test_irregular_and_curves_NULL(void){
    TEST_ASSERT_EQUAL(NULL,rectangle(0,2,&reg));
    TEST_ASSERT_EQUAL(NULL,rhombus(3,0,&reg));
    TEST_ASSERT_EQUAL(NULL,parallellogram(0,3,0,&reg));
    TEST_ASSERT_EQUAL(NULL,trapezium(0,2,5,0,0,&reg));
    TEST_ASSERT_EQUAL(NULL,isosceles_triangle(0,2,&reg));
    TEST_ASSERT_EQUAL(NULL,scalene_triangle(4,6,0,&reg));
}

//Definition of test function for SUCCESS case
void test_irregular_and_curves_SUCCESS(void){
    irregular_and_curves *test = {9,3.89711};
    TEST_ASSERT_EQUAL(SUCCESS,rectangle(3,2,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);
    TEST_ASSERT_EQUAL(SUCCESS,rectangle(3,-2,&reg));
    TEST_ASSERT_EQUAL_PTR(test,reg);
}