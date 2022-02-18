// Harold Justin Windham
// Shapes
// COP3330
// Dr. Gaitros

#include <iostream>
#include "rectangle.h"

using namespace std;

// *********************************************************
// * Default constructors to set values                    *
// *********************************************************
Rectangle::Rectangle()
    {

    }
Rectangle::Rectangle(double s1, double s2)
    {
            side1 = s1;
            side2 = s2;
    }
// *********************************************************
// * Get functions to return perimeter and area            *
// * *******************************************************
double Rectangle::GetPerimeter()
    {
        return side1*2 + side2*2;
    }
double Rectangle::GetArea()
    {
        return side1*side2;
    }
// **********************************************************
// * Set function to set two sides of rectangle             *
// **********************************************************
void Rectangle::SetSide1(double s1)
    {
        if(s1<1)
        side1=1;
    }
void Rectangle::SetSide2(double s2)
    {
        if(s2<1)
        side2=1;
    }