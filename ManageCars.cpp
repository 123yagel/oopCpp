// ManageCars.cpp
// Targil1
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

#include "stdafx.h"
#include "ManageCars.h"
#include <iostream>
#include "MyCar.h"
using namespace std;


ManageCars::ManageCars()
{
	// all inits is in the .h file definition
}


ManageCars::~ManageCars()
{
	deleteAll();
}

void ManageCars::addCar(MyCar& car)
{
	m_cars[m_carCount] = car; // copy made, by the auto copy const
	m_carCount++;
}

int ManageCars::removeCar(int carId)
{
	for (int i = 0; i < m_carCount + 1; i++)
	{
		if (m_cars[i].getCarId == carId)
		{
			for (; i < m_carCount - 2; i++)
			{
				m_cars[i] = m_cars[i + 1];
			}
			m_carCount--;
			return;
		}
	}
}

MyCar* ManageCars:: CarsFromToYears(int fromYear, int toYear)
{

}

MyCar* ManageCars::CarsFromToPrices(int fromPrice, int toPrice)
{

}

void ManageCars::printCar(int carId)
{
	for (int i = 0; i < m_carCount + 1; i++)
	{
		if (m_cars[i].getCarId == carId)
		{
			m_cars[i].print();
			return;
		}
	}
	
}

void ManageCars::printAll()
{
	for (int i = 0; i < m_carCount + 1; i++)
	{
		m_cars[i].print();
		cout << endl;
	}
}

void ManageCars::deleteAll()
{
	for (int i = 0; i < m_carCount + 1; i++)
	{
		delete &(m_cars[i]);
	}
	m_carCount = 0;
}
