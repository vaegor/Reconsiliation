#include "conc.h"
#include <fstream>
#include <iomanip>


conc::conc() : reciptDate()
{
	time = "";
	name = "";
	code = "";
	company = "";
	policy = "";
	user = "";
	reciptID = 0;
	consID = 0;
	bankID = 0;
}

void conc::setAll(ifstream &file, int i)
{
	string data = "";
	int mdate = 0;

	//get date from file string  and converted into ints to pass to date class
	getline(file, data, '\t');
	reciptID = stoi(data);

	getline(file, data, '/');
	mdate = stoi(data);
	setMonth(mdate);
	getline(file, data, '/');
	mdate = stoi(data);
	setDay(mdate);
	getline(file, data, ' ');
	mdate = stoi(data);
	setYear(mdate);
	// Get rest of data
	getline(file, data, '\t');
	time = data;
	getline(file, data, '\t');
	name = data;
	getline(file, data, '\t');
	code = data;
	getline(file, data, '\t');
	company = data;
	getline(file, data, '\t');
	policy = data;
	getline(file, data, '\t');
	if (data == "VOID")
	{
		price = 0;
	}
	else
	{
		price = stof(data);
	}
	getline(file, data, '\n');
	user = data;

	consID = i + 1;

}
/*
	date reciptDate;
	int reciptID;
	string time;
	string name;
	string code;
	string company;
	string policy;
	float price;
	string user;
	int consID;*/
void conc::exportData(ofstream &newFile)
{
	newFile << reciptID << '\t' << month << "/" << day << "/" << year << ' ' << time << '\t' << name << '\t' << code << '\t'<< company << '\t' << policy << '\t' <<  price << '\t' << user << '\t' << consID << '\t' << bankID << '\n';
}

bool conc::priceDate(bank & myBank, int r)
{
	if (price == 0 || price == 0.01)
	{
		consID = -1;
		bankID = -1;
		return true;
	}
	else if (price == -myBank.price && month == myBank.month && code == "1.1 - Agency Sweep")
	{
		
		myBank.consID = consID;
		bankID = r +1;
		myBank.bankID = bankID;
		return true;
	}
	else if ((price == ((myBank.price)*(-1))) && month == (myBank.month - 1) && myBank.day <= 5 && 22 <= day && code == "1.1 - Agency Sweep")
	{
		myBank.consID = consID;
		bankID = r +1;
		myBank.bankID = bankID;
		return true;
	}
	else
	{
		return false;
	}
}

void conc::print()
{
	cout << "Recipt ID: " << setw(5) << reciptID << " Name:  " << left << setw(35) << name << " Code: " << setw(30) << code << " Company: " << setw(35) << company << " Price: " << setw(6) << price << " Consiliation ID" << consID << endl;
	printDate();
	/*
	date reciptDate;
	int reciptID;
	string time;
	string name;
	string code;
	string company;
	string policy;
	float price;
	string user;
	int consID;
	*/
}

date conc::getDate()
{
	return reciptDate;
}

int conc::getReciptID()
{
	return reciptID;
}

string conc::getTime()
{
	return time;
}

string conc::getName()
{
	return name;
}

string conc::getCode()
{
	return code;
}

string conc::getCompany()
{
	return company;
}

string conc::getPolicy()
{
	return policy;
}

float conc::getPrice()
{
	return price;
}

string conc::getUser()
{
	return user;
}

int conc::getConsID()
{
	return consID;
}

bool conc::allowableTime(bank & thisBank)
{
	return false;
}

conc::~conc()
{
}
