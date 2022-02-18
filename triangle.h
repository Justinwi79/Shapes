// Harold Justin Windham
// Shapes
// COP3330
// Dr. Gaitros

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "shape.h"



class Triangle : public Shape
{
    public: 
        Triangle();             //Default
        Triangle(double s1);
        double GetPerimeter();  
        double GetArea();

        void SetSide1(double s1);
        
    protected: 
        double side1;
        
};


#endif