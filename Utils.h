#include <GL/glut.h>
#include "Config.h"

#ifndef UTILS_H
#define UTILS_H

void setColor(Color color);

struct Point
{
    //attributes
    double x, y, z;
    //methods
    Point(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z){}
};

#endif

