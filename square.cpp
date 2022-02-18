// Harold Justin Windham
// Shapes
// COP3330
// Dr. Gaitros

#include <iostream>
#include "square.h"

using namespace std;

// *********************************************************
// * Default constructors to set values                    *
// *********************************************************
Square::Square()
    {

    }
Square::Square(const double s1) 
    {
        side1 = s1;
    }
// *********************************************************
// * Get functions to return perimeter and area            *
// * *******************************************************
double Square::GetPerimeter()
    {
        return side1*4;
    }
double Square::GetArea()
    {
        return side1*side1;
    }
// **********************************************************
// * Set function to set one side of square                 *
// **********************************************************
void Square::SetSide1(double s1)
    {
        if(s1<1)
        side1=1;
    }