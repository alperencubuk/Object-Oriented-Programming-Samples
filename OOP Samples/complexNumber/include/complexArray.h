#include <string>
#include "complexClass.h"

#ifndef COMPLEXARRAY_H
#define COMPLEXARRAY_H


class complexArray
{
    public:
        const complexArray& operator=(const complexArray&);
        /*COPY CONSTRUCTOR*/
        complexArray(const complexArray&);

        /*CONVERT CONSTRUCTOR*/
        complexArray(const string&);

        complexArray(int arraySize);
        /*INDEXING*/
        complexClass& operator[](int index);
        virtual ~complexArray();

    protected:

    private:
        complexClass * cArray;
        int aSize;
        int findOccurancesInString(const string&, const char);
};

#endif // COMPLEXARRAY_H
