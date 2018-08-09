// carManager.h
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

