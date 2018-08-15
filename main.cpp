// main.cpp
//**** Targil 1 *** 
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05


#include <iostream>
#include "MyCar.h"
#include "ManageCars.h"
using namespace std;

int printMenu()
{
	cout << "Choose action:" << endl;
	cout << "    1: addCar" << endl;
	cout << "    2: removeCar" << endl;
	cout << "    3: CarsFromToYears" << endl;
	cout << "    4: CarsFromToPrices" << endl;
	cout << "    5: printCar" << endl;
	cout << "    6: delete all Cars" << endl;
	cout << "    7: printAll" << endl;
	cout << "    8: exit" << endl;
	cout << ">>";
	int number;
	cin >> number;
	return number;
}

// get a line from the user
// using byref output so we doesn't create not-nedded copies of the string
void userGetString(string& out) {
	cin.ignore(INT_MAX, '\n'); // clear the end of the line
	std::getline(cin, out);
}

// ask the user for the detiles
MyCar userGetCar() 
{
	int ID, price, year, engine, hand, usergear;
	string model, color, madein, gear;
	cout << "plese enter id car"<<endl;
	cin >> ID;
	cout << "plese enter model name" << endl;
	userGetString(model);
	cout << "plese enter price" << endl;
	cin >> price;
	cout << "please enter year" << endl;
	cin >> year;
	cout << "please enter color" << endl;
	userGetString(color);
	cout << "please enter engine volume" << endl;
	cin >> engine;
	cout << "please enter GEAR card:" << endl;
	cout << "    1: manualTransmission" << endl;
	cout << "    2: automaticTransmission" << endl;
	cout << "    3: semiautomaticTransmission" << endl;
	cout << "    4: other" << endl;
	cin >> usergear;
	switch (usergear)
	{
	case 1:
		gear = "manualTransmission";
		break;
	case 2:
		gear = "automaticTransmission";
		break;
	case 3:
		gear = "semiautomaticTransmission";
		break;
	case 4:
		cout << "which? "; // no endl.
		userGetString(gear);
		break;
	}
	cout << "Made in? ";
	userGetString(madein);
	cout << "which hand? ";
	cin >> hand;
	return MyCar(ID, model, price, year, color, engine, gear, madein, hand);
}


int main()
{
	// starting the program
	cout << "Welcome to the car shop app :)" << endl << endl;
	
	//initialization of the class ManageCars which we would use through all the program.
	ManageCars market;
	
	/*
	The user would make his decisions using the manul until he
	Decides to finish and exit. The menu with the differnt options
	would repeat using a while loop.
	*/
	while (true) {
		try
		{
			switch (printMenu()) 
			{
				case 1: //cout << "adding car"<<endl;
			
				//TODO: get car from the user here and send it to the market class.
					market.addCar(userGetCar());
					break;

				case 2: 
					int id;
					cout << "ID: ";
					cin >> id;
					market.removeCar(id);
					break;

				case 3:
					int year1, year2;
					cout << "from: ";
					cin >> year1;
					cout << "to: ";
					cin >> year2;
					cout << endl;
					market.CarsFromToYears(year1, year2);
					cout << endl;
					break;
				
				case 4: 
					int price1, price2;
					cout << "min: ";
					cin >> price1;
					cout << "max: ";
					cin >> price2;
					cout << endl;
					market.CarsFromToPrices(price1, price2);
					cout << endl;
					break;
				
				case 5: 
					//int id; // already defined in case 2
					cout << "ID: ";
					cin >> id; 
					market.printCar(id);
					break;
				
				case 6: cout << "deleteing cars" << endl;
					market.deleteAll();
					break;
				
				case 7: 
					cout << "All cars in the store:" << endl;
					cout << endl;
					market.printAll();
					cout << endl;
					break;
				
				case 8: 
					cout << "exiting..." << endl;
					return 0;
					break;
				
				default:
					break;
			}
		}
		catch (string e)
		{
			cout << "***** error! " << e << "*****" << endl;
			cout << "try again:" << endl;
		}
	}	// while true..
	return 0; // just for fun :)
}


