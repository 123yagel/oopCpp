// ManageCars.cpp
// Targil1
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

#include "ManageCars.h"
#include <iostream>
#include "MyCar.h"

using namespace std;


ManageCars::ManageCars()
{
	m_carCount = 0;
	// all inits is in the .h file definition
}


ManageCars::~ManageCars()
{
	deleteAll();
}

void ManageCars::addCar(const MyCar& car)
{
	m_cars[m_carCount] = car; 
	m_carCount++;
}

void ManageCars::removeCar(int carId)
{
	for (int i = 0; i < m_carCount ; i++)//new
	{
		if (m_cars[i].getCarId() == carId)
		{
			for (int j = 0; j < m_carCount-i ; j++)//I think this is a problem... this is my solution
			{
				m_cars[i+j] = m_cars[i + j + 1];
			}
			//m_cars[i]=();
			m_carCount--;
			return;
		}
	}
}


//new

void ManageCars:: CarsFromToYears(int fromYear, int toYear)
{

for (int i = 0; i < m_carCount + 1; i++)
	{
		if ( (m_cars[i].getYear() > fromYear) &&  (m_cars[i].getYear() < toYear))
		{
			m_cars[i].print();
		}
	}



}


//new
void ManageCars::CarsFromToPrices(int fromPrice, int toPrice)
{

	
for (int i = 0; i < m_carCount + 1; i++)
	{
		if ( (m_cars[i].getPrice() > fromPrice) &&  (m_cars[i].getPrice() < toPrice))
		{
			m_cars[i].print();
		}
	}


}

void ManageCars::printCar(int carId)
{
	for (int i = 0; i < m_carCount; i++)//new indexing
	{
		if (m_cars[i].getCarId()== carId)
		{
			m_cars[i].print();
			return;
		}
	}
	
}

void ManageCars::printAll()
{
	for (int i = 0; i < m_carCount; i++)//new
	{
		m_cars[i].print();
		cout << endl;
	}
}

void ManageCars::deleteAll()
{
	for (int i = 0; i < m_carCount; i++)//new
	{
		//delete &(m_cars[i]);//it's wrong I made it a comment for now...
	}
	m_carCount = 0;
}
