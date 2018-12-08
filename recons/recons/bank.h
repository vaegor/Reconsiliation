#pragma once
#include "string"
#include "date.h"
using namespace std;
class bank : public date
{
public:
	//private:
	date createdDate;
	string desc;
	float price;
	float temp;
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
	bank(const string &date, const string &desc, const float &price, const float temp, const int &consID);
	void setdesc(string& desc);
	void setPrice(float& price);
	void setTemp(float& temp);
	void setConsID(int &consID);
	void exportData(ofstream &newFile);
	void setAll(ifstream &file, int i);

	void print();
	~bank();
};



