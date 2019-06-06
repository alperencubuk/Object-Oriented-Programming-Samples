#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H

class clockType
{
    public:
        enum timeOfDay{midDay, midNight};

        clockType(); //default constructor
        clockType(int hour, int minute, int second); //parameterized constructor
        ~clockType();
        void setTime(int h, int m, int s);//
        void setTime(timeOfDay tOfD);
        void returnTime(int &h, int &m, int &s);
        void printTime();
        void incrementSeconds();
        void incrementMinutes();
        void incrementHours();
        int compare(const clockType &t);

    private:
        int hours;
        int minutes;
        int seconds;
        timeOfDay tD;



};

#endif // CLOCKTYPE_H
