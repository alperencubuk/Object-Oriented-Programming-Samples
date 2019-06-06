#ifndef VECTORARRAY_H
#define VECTORARRAY_H
#include "../vector.h"

class vectorArray
{
    public:
        vectorArray();
        vectorArray(int vectorSize);
        const vectorArray& operator=(const vectorArray& vArrayIn);
        friend istream& operator>>(istream & isObject, vectorArray& vAIn);

        vector& operator[](int index) const;

        virtual ~vectorArray();

    protected:

    private:
        int vSize;
        vector *vArray;
};

#endif // VECTORARRAY_H
