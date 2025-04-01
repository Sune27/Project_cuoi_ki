#include "House.h"
#include "Config.h"
#include "Utils.h"
using namespace std;

House::House()
{
    cout << "class House Constructor has been called" << endl;
}

House::~House()
{
    cout << "class House Destructor has been called" << endl;
}

void House::drawRoof()
{
    Point p1(0, 0, 3);
    glBegin(GL_LINE_LOOP);
        glVertex3d(p1.x, p1.y, p1.z);
        glVertex3d(1.0, 1.0, 1);
        glVertex3d(-1, 1, 1);
        glVertex3d(0, 0, 3);
        glVertex3d(-1, -1, 1);
        glVertex3d(1, -1, 1);
    glEnd();
}
