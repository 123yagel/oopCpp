// ManageCars.h
// Targil1
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

#pragma once

class ManageCars
{
public:
	//Im not sure it should be a default
	ManageCars();
	~ManageCars();
	void addCar();
	int removeCar(int ID);
	void CarsFromToYears(int fromYear, int toYear);
	void CarsFromToPrices(int fromPrice, int toPrice);
	void printCar(int id);
	void deleteAll();
	void printAll();
};

