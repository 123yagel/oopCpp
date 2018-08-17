// main.cpp
//**** Targil 1 *** 
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

#include "stdafx.h"
#include <iostream>
#include "MyCar.h"
#include "ManageCars.h"
#include "MenuC.h"
using namespace std;


int main()
{
	// starting the program
	cout << "Welcome to the car shop app :)" << endl << endl;

	//initialization of the class ManageCars which we would use through all the program.
	//ManageCars market;

	MenuC menuMangment;
	menuMangment.run();

	/*
	The user would make his decisions using the manul until he
	Decides to finish and exit. The menu with the differnt options
	would repeat using a while loop.
	*/
	
	return 0; // just for fun :)
}


