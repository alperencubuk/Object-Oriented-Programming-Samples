#ifndef STUDENTTYPE_H
#define STUDENTTYPE_H
#include <string>

using namespace std;

class studentType
{
    public:
        studentType();
        studentType& setFirstName(string name);
        studentType& setLastName(string surname);
        void setAddress(string address);
        friend string setName(studentType &studentObject);
        virtual ~studentType();

    protected:

    private:
        string studentName;
        string studentSurname;
        string studentAddress;
};

#endif // STUDENTTYPE_H
