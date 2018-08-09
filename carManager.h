#pragma once

/*************************

Baruch rosen 208920884  tirgul ????
Orit  1234
Yagel  1234
**************************/




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

