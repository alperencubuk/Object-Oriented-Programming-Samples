#include "Rectangle.h"
#include "Circle.h"
#include <iostream>

using namespace std;

void introduceShape(Shape*);
double calculateShapeArea(Shape*);
double calculateShapeCircumferece(Shape*);

int main()
{

    Rectangle rectangle1(5,2);
    //Circle circle1(5);
    Shape *s = new Circle(3);

    Shape *s1 = &rectangle1;

    introduceShape(s1);


    cout << "My area is: " << calculateShapeArea(&rectangle1) << ", my circumference is: " << calculateShapeCircumferece(&rectangle1) << endl << endl;

    //cout  << "Circle Are is : " << calculateShapeArea(s) << endl;
    //cout  << "Circle Are is : " << calculateShapeArea(s) << endl;

    //introduceShape(&circle1);
    //cout << "My area is: " << calculateShapeArea(&circle1) << ", my circumference is: " << calculateShapeCircumferece(&circle1) << endl;

    delete s;
    return 0;
}

void introduceShape(Shape* shapeToIntroduce)
{
    return shapeToIntroduce->introduce();
}

double calculateShapeArea(Shape* shapeToCalculate)
{
    return shapeToCalculate->calculateArea();
}

double calculateShapeCircumferece(Shape* shapeToCalculate)
{
    return shapeToCalculate->calculateCircumference();
}
