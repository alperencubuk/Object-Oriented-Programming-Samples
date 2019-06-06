#ifndef PCLASS_H
#define PCLASS_H


class pClass
{
    public:
        pClass();
        pClass(const char *objName);
        pClass(const pClass &pObj);
        void setName(const char *oName);
        virtual ~pClass();

    protected:

    private:
        int val1;
        char *name;

};

#endif // PCLASS_H
