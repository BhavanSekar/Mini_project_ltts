/**
 * @file pentagon.c
 * @author S.Shruthi
 * @brief Calculates the perimeter, area, interior angle and exterior angle of a pentagon
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code pentagon(double side, regular_polygon *res){
    if(side==0.0){
        return NULL;
    }
    res->perimeter = 5*side;
    res->area = (1/4)*sqrt(5*(5+(2*sqrt(5))))*pow(side,2);
    res->interior_angle = 108;
    res->exterior_angle = 72;
    return SUCCESS;
}
