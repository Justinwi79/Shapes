// Harold Justin Windham
// Shapes
// COP3330
// Dr. Gaitros

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"


class Rectangle : public Shape
{
    public: 
        Rectangle();
        Rectangle(double s1, double s2);
        double GetPerimeter();
        double GetArea();
        void SetSide1(double s1);
        void SetSide2(double s2);
        
    protected: 
        double side1;
        double side2;
        
};


#endif