#include <GL/glut.h>
#include <iostream>
#include <string>
#include "Utils.h"

#ifndef HOUSE_H
#define HOUSE_H

class House
{
    public:
        House();
        ~House();
        void drawHouse();
        void drawRoof();        
    private:
        string nameHouse;
};


#endif
