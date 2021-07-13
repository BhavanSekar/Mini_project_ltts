/**
 * @file parallellogram.c
 * @author S.Shruthi
 * @brief Calculates the perimeter, and area of a parallellogram
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code parallellogram(double side, double base, double height, irregular_and_curves *res){
    if(side == 0.0 || base == 0.0 || height == 0.0){
        return NULL;
    }
    else if(side<0 || base<0 || height<0){
        side = fabs(side);
        base = fabs(base);
        height = fabs(height);
    }
    res->perimeter = 2*(side + base);
    res->area = base*height;
    return SUCCESS;
}