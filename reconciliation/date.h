#ifndef DATE_H
#define DATE_H

#include <string>
class date
{
public:
    int month;
    int day;
    int year;
public:
    date()
    {
        month = 0;
        day = 0;
        year = 0;
    }
    void setDay(int mdate)
    {
        day =  mdate;
    }
    void setYear(int mdate)
    {
        year = mdate;
    }
    void setMonth(int mdate)
    {
        month = mdate;
    }
    ~date();
};


#endif // DATE_H
