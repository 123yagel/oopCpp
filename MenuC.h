//MenuC.h

#pragma once

#include "stdafx.h"
#include "MenuC.h"
#include <iostream>
#include "MyCar.h"
#include "ManageCars.h"
#include<string>
using namespace std;



class MenuC
{
private:
	
	ManageCars market;

public:
	MenuC();
	~MenuC();
	void run();
	int printMenu();
	void userGetString(string& out);
	MyCar userGetCar();
};


