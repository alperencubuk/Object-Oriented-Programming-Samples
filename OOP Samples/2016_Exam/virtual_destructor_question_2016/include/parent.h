#ifndef PARENT_H
#define PARENT_H
#include "memory.h"

class parent
{
    protected:
      char *name;
    public:
        parent(const char *);
        parent();
        virtual char *print();
        virtual ~parent();

};

parent::parent(){
  name = new char [10];
}
parent::parent(const char* pName)
{
    int nSize = strlen(pName);
    name = new char [nSize];
    memcpy (name, pName, nSize * sizeof(char));
    //ctor
}

char *parent::print(){
    return name;
}

parent::~parent()
{
    delete name;
    //dtor
}


#endif // PARENT_H
