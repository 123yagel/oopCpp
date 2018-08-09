// ManageCars.h
// Targil1
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

#pragma once

#include "MyCar.h"

#define MAX_CARS 30

class ManageCars
{
private:
	MyCar m_cars[MAX_CARS];
	int m_carCount = 0;
public:
	//Im not sure it should be a default
	ManageCars();
	~ManageCars();
	void addCar(MyCar& car);
	int removeCar(int ID);
	MyCar* CarsFromToYears(int fromYear, int toYear);
	MyCar* CarsFromToPrices(int fromPrice, int toPrice);
	void printCar(int id);
	void deleteAll();
	void printAll();
};

