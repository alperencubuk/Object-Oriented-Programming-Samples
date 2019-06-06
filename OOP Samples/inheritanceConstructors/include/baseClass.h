#ifndef BASECLASS_H
#define BASECLASS_H


class baseClass
{
    public:
        void print();
        baseClass();
        baseClass(int x, int y, int z);
        virtual ~baseClass();

    protected:

    private:
        int a, b, c;
};

#endif // BASECLASS_H
