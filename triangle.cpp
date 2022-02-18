// Harold Justin Windham
// Shapes
// COP3330
// Dr. Gaitros

#include <iostream>
#include "triangle.h"

using namespace std;

// *********************************************************
// * Default constructors to set values                    *
// *********************************************************
Triangle::Triangle()
    {

    }
Triangle::Triangle(double s1)
    {
        side1 = s1;
    }
// *********************************************************
// * Get functions to return perimeter and area            *
// * *******************************************************
double Triangle::GetPerimeter()
    {
        return side1*3;
    }
double Triangle::GetArea()
    {
        return (side1*2)/2;
    }
// **********************************************************
// * Set function to set one side of triangle               *
// **********************************************************
void Triangle::SetSide1(double s1)
    {
        if(s1<1)
        side1=1;
    }