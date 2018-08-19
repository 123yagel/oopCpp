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
	
	//initialization of the class MenuC which we would use through all the program to help the user.
	MenuC menuMangment;
	
	//starting the program
	menuMangment.run();

	return 0; // just for fun :)
}


