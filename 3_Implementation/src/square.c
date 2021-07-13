/**
 * @file square.c
 * @author S.Shruthi
 * @brief Calculates the perimeter, area, interior angle and exterior angle of a square
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code square(double side, regular_polygon *res){
    if(side==0.0){
        return NULL;
    }
    else if(side<0){
        side = fabs(side);
    }
    res->perimeter = 4*side;
    res->area = pow(side,2);
    res->interior_angle = 90;
    res->exterior_angle = 90;
    return SUCCESS;
}