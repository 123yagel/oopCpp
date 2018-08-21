/*
Baruch Rosen 208920884 05
Orit Herman 206924466 09
Yagel Ashkenazi 208761296 05
*/
// ManageCars.h
// Targil1

#pragma once

#include "MyCar.h"
#include <vector>

#define MAX_CARS 30

// represent a car store
class ManageCars
{
private:
	MyCar m_cars[MAX_CARS];
	int m_carCount;
public:
	ManageCars(); // with 0 cars
	~ManageCars();

	// add new car
	// practicly, only MAX_CARS cars allowed
	// can throw string "too much cars"
	void addCar(const MyCar& car);

	// remove car by id
	// can throw string "not found"
	void removeCar(int ID);

	std::vector<int> CarsFromToYears(int fromYear, int toYear);

	std::vector<int> CarsFromToPrices(int fromPrice, int toPrice);

	// print car by id
	// can throw string "not found"
	void printCar(int id);

	// delete all cars...
	void deleteAll();

	// print all cars to cout
	void printAll();
};

