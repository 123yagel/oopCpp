//MenuC.h
//**** Targil 1 *** 
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

#pragma once

#include "stdafx.h"
#include "MenuC.h"
#include "MyCar.h"
#include "ManageCars.h"
#include<string>
#include <iostream>


class MenuC
{
private:
	ManageCars market;

public:
	void run();
	int printMenu();
	std::string userGetString();
	MyCar userGetCar();
};


