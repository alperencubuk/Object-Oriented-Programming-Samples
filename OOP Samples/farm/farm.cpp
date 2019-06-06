#include <string.h>
#include "farm.h"

#if !_ABSTRACT_
Animal::Animal(){
   voice = "default value";
}
#endif

Animal::~Animal()
{

}
Dog::Dog(const char * nameIn)
{
    sign = "D";
    voice = "hau";
    name = new char[1000];
    memcpy(name, nameIn, strlen(nameIn)*sizeof(char));
}
Dog::~Dog()
{
    delete [] name;
}
Cat::Cat()
{
    sign = "C";
    voice = "meow";
}
Cat::~Cat()
{

}
Cow::Cow()
{
    sign = "CO";
    voice = "moooo";
}
Cow::~Cow()
{

}
