#pragma once
#include <string>
#include <iostream>
using namespace std;
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


	void printDate();

	~date();
};

