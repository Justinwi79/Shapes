#include <iostream>
#include "circle.h"
#include "rectangle.h"
#include "shape.h"
#include "square.h"
#include "triangle.h"
// Harold Justin Windham
// Shapes
// COP3330
// Dr. Gaitros

#include "rectangle.h"
using namespace std;

int main()
{

    Rectangle MyRectangle;
    MyRectangle.SetSide1(3);    // Start my sets...
    MyRectangle.SetSide2(5);
    Triangle MyTriangle;
    MyTriangle.SetSide1(5);
    Square MySquare;
    MySquare.SetSide1(5);
    Circle MyCircle;
    MyCircle.SetRadius(3);

    cout << MyRectangle.GetArea() << endl;      // Display results...
    cout << MyRectangle.GetPerimeter() << endl; 
    cout << MyTriangle.GetArea() << endl;
    cout << MyTriangle.GetPerimeter() << endl; 
    cout << MySquare.GetPerimeter() << endl; 
    cout << MySquare.GetArea() << endl; 
    cout << MyCircle.GetPerimeter() << endl; 
    cout << MyCircle.GetArea() << endl; 

    
    return 0;
}