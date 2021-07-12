/**
 * @file rhombus.c
 * @author S.Shruthi
 * @brief Calculates the perimeter, and area of a rhombus
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code rhombus(double diagonal1, double diagonal2, irregular_and_curves *res){
    if(diagonal1==0.0 || diagonal2==0.0){
        return NULL;
    }
    res->perimeter = 2*sqrt(pow(diagonal1,2)+pow(diagonal2,2));
    res->area = diagonal1*diagonal2/2;
    return SUCCESS;
}