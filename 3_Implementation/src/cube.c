/**
 * @file cube.c
 * @author S.Shruthi
 * @brief Calculates the volume, lateral surface area and the surface area of the cube
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code cube(double side, three_dim *res){
    if(side == 0.0){
        return NULL;
    }
    else if(side<0){
        side = fabs(side);
    }
    res->volume = pow(side,3);
    res->lateral_surface_area = 4*pow(side,2);
    res->total_surface_area = 6*pow(side,2);
    return SUCCESS;
}