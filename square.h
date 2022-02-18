// Harold Justin Windham
// Shapes
// COP3330
// Dr. Gaitros

#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"



class Square : public Shape
{
    public: 
        Square();
        Square(double s1);
        double GetPerimeter();
        double GetArea();
        void SetSide1(double s1);
    protected: 
        double side1;
};


#endif