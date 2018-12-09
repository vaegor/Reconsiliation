#include "bank.h"

#include "bank.h"
#include <fstream>
#include <string>
using std::string;
using std::fstream;


bank::bank(const string &date, const string &desc, const double &price, const double temp, const int &consID)
{
    this->desc = desc;
    this->price = price;
    this->temp = temp;
    this->consID = consID;

}

void bank::setdesc(string& desc)
{
    this->desc = desc;
}
void bank::setPrice(double& price)
{
    this->price = price;
}
void bank::setTemp(double& temp)
{
    this->temp = temp;
}
void bank::setConsID(int &consID)
{
    this->consID = consID;
}


void bank::setAll(ifstream & file, int i)
{
    string data = "";
    int date = 0;

    //get date from file string  and converted into ints to pass to date class
    getline(file, data, '/');
    date = stoi(data);
    setMonth(date);
    getline(file, data, '/');
    date = stoi(data);
    setDay(date);
    getline(file, data, '\t');
    date = stoi(data);
    setYear(date);
    // Get rest of data
    getline(file, data, '\t');
    desc = data;
    getline(file, data, '\t');
    price = stod(data);
    getline(file, data, '\n');
    temp = stod(data);

    consID = 0;
}

void bank::exportData(ofstream &newFile)
{
    newFile << month << "/" << day << "/" << year << '\t' << desc << '\t' << price << '\t' << temp << '\t' << consID << '\n';
}

bank::~bank()
{
}
