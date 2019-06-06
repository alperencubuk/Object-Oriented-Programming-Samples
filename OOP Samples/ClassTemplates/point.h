#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <iostream>

using namespace std;

template<typename T>
class Point //base, parent, superclass
{
    protected:
        T x;
    public:
        Point(T=0);
        ~Point();
        T getX();
        void setX(T);
};

//Please implement the template functions of the class Point
//Template sınıfının fonksiyonlarını buraya implement edin

template <typename T>
Point<T>::Point(T inX) {
    x = inX;
}

template <typename T>
Point<T>::~Point() {
}

template <typename T>
T Point<T>::getX() {
    return x;
}

template <typename T>
void Point<T>::setX(T inX) {
    x = inX;
}

template <typename T>

class Point2D:protected Point<T> {

   protected :
      T y;
   public :
      Point2D(T = 0, T = 0);
      ~Point2D();
      T getY();
      void setY(T);
      void setXY(T, T);
      Point2D operator+(Point2D);

};

template <typename T>
Point2D<T>::Point2D(T inX, T inY){
   this->x = inX;
   y = inY;
}

template <typename T>
Point2D<T>::~Point2D(){
}


template <typename T>
T Point2D<T>::getY(){
    return y;
}

template <typename T>
void Point2D<T>::setY(T inY){
    y = inY;
}

template <typename T>
void Point2D<T>::setXY(T inX, T inY){
    y = inY;
    this->x = inX;
}

template <typename T>

Point2D<T> Point2D<T>::operator+(Point2D<T> oIn){
    Point2D<T> temp;
    temp.x = this->x + oIn.x;
    temp.y = y + oIn.y;
    return temp;
}

/*
class Point3D : public Point2D
{

};
*/

/*
    class Point2D : public Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - protected
    public - public

    class Point2D : protected Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - protected
    public - protected


    class Point2D : private Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - private
    public - private

*/
#endif // POINT_H_INCLUDED
