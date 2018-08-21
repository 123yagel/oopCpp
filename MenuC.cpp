/*
Baruch Rosen 208920884 05
Orit Herman 206924466 09
Yagel Ashkenazi 208761296 05
*/
//MenuC.cpp
//**** Targil 1 *** 

#include "stdafx.h"
#include "MenuC.h"
#include "MyCar.h"
#include "ManageCars.h"
#include <iostream>
#include<string>
using namespace std;


void MenuC::run()
{

	// starting the program
	cout << "Welcome to the car shop app" << endl << endl;

	int id;
	std::vector<int> array;
	while (true) {
		
			switch (printMenu())
			{
			case 1:
				try {
					market.addCar(userGetCar());
				}
				
				catch (const std::string err)
				{
					cout << endl << "this car was removed please try again or do another action" << endl;
					cout << "the error was: " << err << endl;
				}
				
				break;

			case 2:
				//std::string id;
				cout << "ID: ";
				cin >> id;
				try
				{
					market.removeCar(id);
				}
				catch (const std::string err)
				{
					cout << err << endl;
				}
				
				break;

			case 3:
				int fromyear, toyear;
				cout << "from: ";
				cin >> fromyear;
				cout << "to: ";
				cin >> toyear;
				cout << endl;
				printArray(market.CarsFromToYears(fromyear, toyear));
				cout << endl;
				break;

			case 4:
				int pricefrom, priceto;
				cout << "min: ";
				cin >> pricefrom;
				cout << "max: ";
				cin >> priceto;
				cout << endl;
				printArray(market.CarsFromToPrices(pricefrom, priceto));
				cout << endl;
				break;

			case 5:
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
				return; // break the loop
			default:
				// another chance
				break;
			}
	}	// while true..
}

int MenuC::printMenu()
{
	cout << endl;
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

std::string MenuC::userGetString()
{
	std::string out;
		cin.ignore(INT_MAX, '\n'); // clear the end of the line
	std::getline(cin, out);
	return out;
}

MyCar MenuC::userGetCar()
{
	MyCar car_ret; // so we use the setters
	int  ID, price, year, engine, hand, usergear;
	string  model, color, madein, gear;
	
	
	
		cout << "please enter id car" << endl;
		cin >> ID;
		car_ret.setCarId(ID);
		cout << "please enter model name" << endl;
		model = userGetString();
		car_ret.setModelName(model);
		cout << "please enter price" << endl;
		cin >> price;
		car_ret.setPrice(price);
		cout << "please enter year" << endl;
		cin >> year;
		car_ret.setYear(year);
		cout << "please enter color" << endl;
		color = userGetString();
		car_ret.setColor(color);
		cout << "please enter engine volume" << endl;
		cin >> engine;
		car_ret.setEngineVolume(engine);
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
			cout << "what is your gear? "; // no endl.
			gear = userGetString();
			break;
		}
		car_ret.setGearType(gear);
		cout << "Made in? ";
		madein = userGetString();
		car_ret.setMadeIn(madein);
		cout << "which hand? ";
		cin >> hand;
		car_ret.setHand(hand);

	
	
	return car_ret;
}

void MenuC::printArray(std::vector<int> idArray)
{
	for (int i = 0; i < idArray.size(); i++) {
		market.printCar(idArray[i]);
		cout << endl;
	}
}

