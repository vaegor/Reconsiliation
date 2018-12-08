#pragma once
#include "bank.h"
#include <string>
template <typename type>
class vector
{
private:
	type * record;
	int lines;

public:
	//if vector is not init. Cout error;
	vector()
	{
		cout << "Error, vector not initialised";
	}

	//Opens file of fileName and read the number of lines in the file, Initialize the type of vector with data from the file.
	vector(string const fileName)
	{

		string line;
		ifstream myfile;
		myfile.open(fileName);

		while (getline(myfile, line))
		{
			++lines;
		}
		cout << "Number of lines in text file: " << lines;
		myfile.close();
		cout << endl << endl;
		record = new type[lines];
		readData(fileName);
	}
	//Function will read data from file to each object in the vector. It will call the setAll function from corresponding class.
	void readData(const string fileName)
	{
		ifstream file;
		file.open(fileName);
		for (int i = 0; i < lines; i++)
		{


			record[i].setAll(file, i);

		}
		file.close();

	}

	//Prints data from all objects in vector.
	void printAll()
	{
		for (int i = 0; i < lines; i++)
		{
			record[i].print();
		}
	}
	~vector()
	{
		//delete [] record;
	}

	void exportAll()
	{
		ofstream newFile;
		newFile.open("newFile.txt");
		for (int i = 0; i < lines; i++)
		{
			record[i].exportData(newFile);
		}
		newFile.close();
	}

	// Get Functions
	int getLines()
	{
		return lines;
	}
	type getRecord(int &i)
	{
		return record[i];
	}

	// Set Functions

	void setRecordConsID(int r, int value)
	{
		record[r].consID = value;
	}

	//Main fucntion. will concilididate accounting with bank
	 void concilidiate(vector<bank> &myBank)
	{
		for (int i = 0; i < lines; i++)
		{
			int r = 0;
			bool priceSearch = false;

			while (priceSearch != true)
			{
				
				if (r < myBank.getLines())
				{
					bank bankRecon = myBank.getRecord(r);
					priceSearch = record[i].priceDate(bankRecon, r);
					r++;

				}

				else
				{
					//price not found
					priceSearch = true;
					myBank.setRecordConsID(r, 0);
					

				}

			}			
		}
	}
};
