/**
 * @file cone.c
 * @author S.Shruthi
 * @brief Calculates the volume, lateral surface area and the total surface area of the cone
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code cone(double radius, double height, three_dim *res){
    if(radius == 0.0 || height == 0.0){
        return NULL;
    }
    else if(radius<0 || height<0){
        radius = fabs(radius);
        height = fabs(height);
    }
    res->volume = pow(radius,2)*(height/3)*PI;
    res->lateral_surface_area = radius*sqrt(pow(radius,2) + pow(height,2))*PI;
    res->total_surface_area = radius*(radius + sqrt(pow(radius,2) + pow(height,2)))*PI;
    return SUCCESS;
}