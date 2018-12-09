#ifndef BANK_H
#define BANK_H

#include "string"
#include "date.h"
#include <fstream>
using std::string;
using std::ifstream;
using std::ofstream;
class bank : public date
{
public:
    //private:
    date createdDate;
    string desc;
    double price;
    double temp;
    int consID;
    int bankID;
public:
    bank() : createdDate() {
        desc = "";
        price = 0;
        temp = 0;
        consID = 0;
        bankID = 0;
    }
    bank(const string &date, const string &desc, const double &price, const double temp, const int &consID);
    void setdesc(string& desc);
    void setPrice(double& price);
    void setTemp(double& temp);
    void setConsID(int &consID);
    void exportData(ofstream &newFile);
    void setAll(ifstream &file, int i);

    void print();
    ~bank();
};

#endif // BANK_H
