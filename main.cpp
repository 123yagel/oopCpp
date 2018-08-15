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
	cout << "please enter the number for your next action" << endl;
	cout << "1: addCar" << endl;
	cout << "2: removeCar" << endl;
	cout << "3: CarsFromToYears" << endl;
	cout << "4: CarsFromToPrices" << endl;
	cout << "5: printCar" << endl;
	cout << "6: delete all Cars" << endl;
	cout << "7: printAll" << endl;
	cout << "8: exit" << endl;
	
	int number;
	cin >> number;
	return number;
}
int main()
{
	// starting the program
	cout << "welcome to the car shop app" << endl;
	
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
					market.addCar();
					break;

				case 2: cout << "please enter the ID of the car you want to remove" << endl;
					int id;
					cin >> id;
					market.removeCar(id);
					break;

				case 3: cout << "please enter your minimum year" << endl;
					int year1, year2;
					cin >> year1;
					cout << "please enter maximum year" << endl;
					cin >> year2;
					market.CarsFromToYears(year1, year2);
					break;
				
				case 4: cout << "please enter your minimum price and then your maximum price" << endl;
					int price1, price2;
					cin >> price1;
					cin >> price2;
					market.CarsFromToPrices(price1, price2);
					break;
				
				case 5: cout << "please enter the ID of the car you want to print" << endl;
					int id3;
					cin >> id3;
					market.printCar(id3);
					break;
				
				case 6: cout << "deleteing car" << endl;
					market.deleteAll();
					break;
				
				case 7: cout << "printing all cars" << endl;
					market.printAll();
					break;
				
				case 8: cout << "exit" << endl;
					return 0;
					break;
				
				default:
					break;
			}
		}
		catch (string e)
		{
			cout << "error! " << e << endl;
			cout << "try again:" << endl;
		}
	}	// while true..
	return 0; // just for fun :)
}


