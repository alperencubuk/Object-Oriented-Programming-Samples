#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;

class vector
{

  public:
    vector();
    vector(double xIn, double yIn);
    vector(double xIn);
    vector operator+(const vector& vectorIn) const;
    bool operator==(const vector& vectorIn) const;
    friend ostream& operator<<(ostream& osObject, const vector& vectorIn);
    friend istream& operator>>(istream& isObject, vector& vectorIn);
    double getx();
    double gety();
    void setx(double xIn);
    void sety(double yIn);

    const vector& operator=(const vector& vIn);

    vector operator++();
    vector operator++(int);

      //void printVector();

      //friend vector operator+(const vector& leftVector, const vector& rightVector);

    virtual ~vector();

    protected:

    private:
      double x, y;
};

#endif // VECTOR_H
