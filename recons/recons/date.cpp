#include "date.h"
#include <iostream>
void date::printDate()
{
	cout << month << "/" << day << "/" << year;
}

date::~date()
{
}
