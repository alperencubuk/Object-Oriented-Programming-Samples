#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H


class clockType
{
    public:
        clockType(int = 0, int = 0, int = 0);
        void setTime(int hour, int minute, int second);
        void printTime();
        virtual ~clockType();

    private:
        int hr;
        int min;
        int sec;

};

#endif // CLOCKTYPE_H
