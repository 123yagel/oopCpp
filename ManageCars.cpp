/*
Baruch Rosen 208920884 05
Orit Herman 206924466 09
Yagel Ashkenazi 208761296 05
*/
// ManageCars.cpp
// Targil1

#include "stdafx.h"
#include "ManageCars.h"
#include <iostream>
#include "MyCar.h"

using namespace std;

ManageCars::ManageCars()
{
	// the car array is static so it automaticly initialized
	// and we re-init it when we add cars
	m_carCount = 0;
}

ManageCars::~ManageCars()
{
	//deleteAll(); // not needed
	// all of the cars is auto-destructed.
}


void ManageCars::addCar(const MyCar& car)
{
	try
	{
		if (m_carCount >= MAX_CARS)
			throw string(" too much cars ");
	}
	catch (const std::string err)
	{
		cout << endl<< "this car was removed please try again or do another action" << endl;
		cout << "the error was: " << err <<endl<<endl;
		m_carCount--;
	}
	
	m_cars[m_carCount] = car;
	m_carCount++;
}



void ManageCars::removeCar(int carId)
{
	// we find the car to remove, and fill the space with the left cars
	// as in `deleteAll`, we can't and we dont need to `delete` them.
	// that will not cause memory leaks.
	// (if we add new cars it will delete the olds)

	for (int i = 0; i < m_carCount; i++)
	{
		if (m_cars[i].getCarId() == carId)
		{
			// just move all next cars back 1 place:
			for (int j = 0; j < m_carCount - i; j++)
			{
				m_cars[i + j] = m_cars[i + j + 1];
			}
			// and update the car counter:
			m_carCount--;
			return;
		}
	}
	throw string("not found");
}

void ManageCars::CarsFromToYears(int fromYear, int toYear)
{
	for (int i = 0; i < m_carCount; i++)
		if ((m_cars[i].getYear() >= fromYear) && (m_cars[i].getYear() <= toYear)) {
			m_cars[i].print();
			cout << endl;
		}
}

void ManageCars::CarsFromToPrices(int fromPrice, int toPrice)
{
	for (int i = 0; i < m_carCount; i++)
		if ((m_cars[i].getPrice() >= fromPrice) && (m_cars[i].getPrice() <= toPrice))
		{
			m_cars[i].print();
			cout << endl;
		}
}

void ManageCars::printCar(int carId)
{
	for (int i = 0; i < m_carCount; i++)
	{
		if (m_cars[i].getCarId() == carId)
		{
			m_cars[i].print();
			return; // there is only one car
		}
	}
	throw "not found";
}

void ManageCars::printAll()
{
	for (int i = 0; i < m_carCount; i++)
	{
		m_cars[i].print();
		cout << endl;
	}
}

void ManageCars::compareCars()
{
	int ID1, ID2;
	bool ans;
	int firstYear,secYear;
	cout << "please enter the first car ID you want to compare" << endl;
	cin >> ID1;
	cout << "please enter the seconed car ID" << endl;
	cin >> ID2;

	for (int f = 0; f < m_carCount; f++)
	{
		if (ID1 == m_cars[f].getCarId())
		{
			secYear = m_cars[f].getYear();
		}
		
	}
	
	for (int g = 0; g < m_carCount; g++)
	{
		if (ID2 == m_cars[g].getCarId())
		{
			firstYear = m_cars[g].getYear();
			ans = m_cars[g].compare(firstYear, secYear);
		}

	}
	if (ans == true)
	{
		cout << "the second car is older" << endl;
	}
	else
	{
		cout << "the first car is older" << endl;
	}
	
}

void ManageCars::deleteAll()
{
	// since we doesn't use dynamic allocation we can't use `delete`.
	// however, the destructors will run when we exit the program.
	m_carCount = 0;
}
