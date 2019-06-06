#include <iostream>
#include "point3d.h"
#include "point2d.h"
#include "point1D.h"

using namespace std;

double calculateTotalLength(point1d *pointsVector[], int numOfPoints){
   double totalLength;

   for(int i = 0; i < numOfPoints; i ++)
      totalLength += pointsVector[i]->calculateLength();

   return totalLength;
}

int main()
{

    point3d pointEx3d(3, 3, 3);
    point2d pointEx2d(3, 3);
    point1d pointEx1d(3);

    point1d *points[5];

    points[0] = &pointEx1d; //up-cast
    points[1] = &pointEx2d;
    points[2] = &pointEx3d;


    cout << "Total Length of the point vectors = " << calculateTotalLength(points, 3) << endl;

    return 0;
}
