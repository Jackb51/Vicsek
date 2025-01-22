#include "box.h"
#include <iostream>

Box::Box() : lx(5), ly(5), x0(0), y0(0)
{
}

Box::Box(double lx, double ly, double x0, double y0)
{
    // this constructor actually assigns the values
    this->lx = lx;
    this->ly = ly;
    this->x0 = x0;
    this->y0 = y0;
}

void Box::setSides(double lx, double ly)
{
    this->lx = lx;
    this->ly = ly;
}

void Box::setOrigin(double x, double y)
{
    this->x0 = x;
    this->y0 = y;
}

// Getters

double Box::getSidex() const
{
    return lx;
}

double Box::getSidey() const
{
    return ly;
}