/**
 * @file rectangle.c
 * @author S.Shruthi
 * @brief Calculates the perimeter, and area of a rectangle
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code rectangle(double length, double breadth, irregular_and_curves *res){
    if(length==0.0 || breadth==0.0){
        return NULL;
    }
    else if(length<0 || breadth<0){
        length = fabs(length);
        breadth = fabs(breadth);
    }
    res->perimeter = 2*(length + breadth);
    res->area = length*breadth;
    return SUCCESS;
}