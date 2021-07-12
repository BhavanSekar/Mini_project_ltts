/**
 * @file cylinder.c
 * @author S.Shruthi
 * @brief Calculates the volume, lateral surface area and the total surface area of the cylinder
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code cylinder(double radius, double height, three_dim *res){
    if(radius == 0.0 || height == 0.0){
        return NULL;
    }
    res->volume = pow(radius,2)*height*PI;
    res->lateral_surface_area = 2*radius*height*PI;
    res->total_surface_area = 2*radius*(radius + height)*PI;
    return SUCCESS;
}