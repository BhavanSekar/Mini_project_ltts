/**
 * @file cuboid.c
 * @author S.Shruthi
 * @brief Calculates the volume, lateral surface area and the surface area of the cuboid
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "fun.h"
#include "math.h"

error_code cuboid(double length, double breadth, double height, three_dim *res){
    if(length == 0.0 || breadth == 0.0 || height == 0.0){
        return NULL;
    }
    res->volume = length*breadth*height;
    res->lateral_surface_area = 2*height*(length + breadth);
    res->total_surface_area = 2*((length*breadth) + (breadth*height) + (height*length));
    return SUCCESS;
}