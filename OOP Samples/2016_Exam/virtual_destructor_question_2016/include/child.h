#ifndef CHILD_H
#define CHILD_H
#include "parent.h"

class child:public parent
{
    char *school;
    public:
        child(const char *, const char *);
        char *print();
        ~child();
};

child::child(const char * cName, const char * cSchool)
{
    int nSize = strlen(cName);
    int sSize = strlen(cSchool);
    name = new char [nSize];
    school = new char [sSize];
    memcpy(name, cName, nSize * sizeof(char));
    memcpy(school, cSchool, sSize * sizeof(char));
    //ctor
}

char *  child::print(){
    int nSize = strlen(name);
    int sSize = strlen(school);

    char *schoolAndName = new char [nSize + sSize + 1];
    memcpy(schoolAndName, name, nSize * sizeof(char));
    memcpy(&schoolAndName[nSize], school, sSize * sizeof(char));
    return schoolAndName;
}
child::~child()
{
    delete school;
    //dtor
}
#endif // CHILD_H
