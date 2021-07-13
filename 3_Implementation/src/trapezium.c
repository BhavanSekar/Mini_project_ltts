/**
 * @file trapezium.c
 * @author S.Shruthi
 * @brief Calculates the perimeter, and area of a trapezium
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code trapezium(double base1, double side1, double base2, double side2, double height, irregular_and_curves *res){
    if(base1 == 0.0 || side1 == 0.0 || base2 == 0.0 || side2 == 0.0 || height == 0.0){
        return NULL;
    }
    else if(base1<0 || side1<0 || base2<0 || side2<0 || height<0){
        base1 = fabs(base1);
        side1 = fabs(side1);
        base2 = fabs(base2);
        side2 = fabs(side2);
        height = fabs(height);

    }
    res->perimeter = base1 + side1 + base2 + side2;
    res->area = (base1 + base2)*height/2;
    return SUCCESS;
}