// Harold Justin Windham
// Shapes
// COP3330
// Dr. Gaitros

#include <iostream>
#include "circle.h"

using namespace std;

// *********************************************************
// * Default constructors to set values                    *
// *********************************************************
Circle::Circle()
    {

    }
Circle::Circle(double r)
    {
        radius = r;
    }
// *********************************************************
// * Get functions to return perimeter and area            *
// * *******************************************************
double Circle::GetPerimeter()
    {
        return 3.14 * 2 * radius;
    }
double Circle::GetArea()
    {
        return 3.14 * radius * radius;
    }
// **********************************************************
// * Set function to set radius of the circle               *
// **********************************************************
void Circle::SetRadius(double r)
    {
        if(r<1)
        radius = 1;
    }