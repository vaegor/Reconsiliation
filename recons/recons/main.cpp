#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "vector.h"
#include "conc.h"
using namespace std;

void displayMain();
void mainMenu(int choiceMenu);

int main()
{/*
	int choiceMenu = 0;
	while (choiceMenu = 4)
	{
		displayMain();

		mainMenu(choiceMenu);
	}

	*/
	string BankFileName = "bank.txt";
	vector<bank> myBank(BankFileName);
	string conciliationFileName = "conciliation.txt";
	vector<conc> myConciliation(conciliationFileName);
	myConciliation.concilidiate(myBank);
	
	myConciliation.exportAll();
	//myBank.exportAll();
	cout << "ok";
	return 0;

}


void displayMain()
{
	cout << "=========================================================" << endl;
	cout << "                  " << "Contability Program - CP" << endl << endl;
	cout << "=========================================================" << endl;

	cout << "Main Menu:" << endl;
	cout << "=========================================================" << endl;
	cout << "1): Show All records From From defualt files." << endl;
	cout << "2): Reconciliate Default Files." << endl;
	cout << "3): Export conciliation File to new file" << endl;
	cout << "4): Exit Program: " << endl;

	cout << "Enter and a number and press enter to select your choice" << endl;
}

void mainMenu(int choiceMenu)
{
	cin >> choiceMenu;
	if (choiceMenu = 1)
	{
		cout << "=========================================================" << endl;
		cout << endl << "Display File Menu" << endl << endl;
		cout << "=========================================================" << endl;
		cout << "1) Show Bank File" << endl;
		cout << "2) Show Accounting File" << endl << endl;
		cout << "main" << endl;
		cout << "=========================================================" << endl;

		cin >> choiceMenu;
		if (choiceMenu = 1)
		{
			string BankFileName = "bank.txt";
			vector<bank> myBank(BankFileName);
			myBank.printAll();
			choiceMenu = 0;
		}
		else if (choiceMenu = 2)
		{
			string conciliationFileName = "conciliation.txt";
			vector<conc> myConciliation(conciliationFileName);
			myConciliation.printAll();
			choiceMenu = 0;
		}
		else if (choiceMenu = 3)
		{
			displayMain();
			choiceMenu = 0;
		}

	}

	else if (choiceMenu = 2)
	{
		//get Bank Data
		string BankFileName = "bank.txt";
		vector<bank> myBank(BankFileName);
		//get accounting data
		string conciliationFileName = "conciliation.txt";
		vector<conc> myConciliation(conciliationFileName);
		//Reconciliate
		myConciliation.concilidiate(myBank);
	}

	else if (choiceMenu = 3)
	{
		//get Bank Data
		string BankFileName = "bank.txt";
		vector<bank> myBank(BankFileName);
		//get accounting data
		string conciliationFileName = "conciliation.txt";
		vector<conc> myConciliation(conciliationFileName);
		//Reconciliate
		myConciliation.concilidiate(myBank);
		myConciliation.exportAll();
	}

	else if (choiceMenu = 4)
	{

	}
}