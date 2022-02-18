// Harold Justin Windham
// Shapes
// COP3330
// Dr. Gaitros

#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"


class Circle : public Shape
{
    public: 
        Circle();
        Circle(double r);

        double GetPerimeter();
        double GetArea();

        void SetRadius(double r);
    protected: 
        double radius;
        
};


#endif