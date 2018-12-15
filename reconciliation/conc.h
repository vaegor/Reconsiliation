#include <string>
#include "date.h"
#include <fstream>
#include "bank.h"
//concilliation class
using std::string;
class conc : public date
{
    //private:
public:
    date reciptDate;
    int reciptID;
    string time;
    string name;
    string code;
    string company;
    string policy;
    double price;
    string user;
    int consID;
    int bankID;
public:
    conc();
    int getConcID();
    void setAll(ifstream &file, int i);
    void print();
    date getDate();
    int getReciptID();
    string getDateS();
    string getTime();
    string getName();
    string getCode();
    string getCompany();
    string getPolicy();
    double getPrice();
    int getBankID();
    string getUser();
    int getConsID();
    bool allowableTime(bank & thisBank);
    bool priceDate(bank & myBank, int r);
    void exportData(ofstream &newFile);
    ~conc();
};

