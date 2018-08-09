// MyCar.cpp
// Targil1
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

#include "MyCar.h"
#include "stdafx.h"
#include <string>

using namespace std;

void MyCar::MyCar(int carId = 0, char* modelName = "Not set yet", , int price = 0, int year = 0, char* color = "Not set yet",
	int engineVolume = 0, char* gearType = "Not set yet", char* madeIn = "Not set yet", int hand = 0) :
	m_carId(carId), m_price(price), m_year(year), m_engineVolume(engineVolume), m_hand(hand)
{
	char* m_modelName = new char[strlen(modelName) + 1];
	strcpy(m_modelName, modelName);
	char* m_color = new char[strlen(color) + 1];
	strcpy(m_color, color);
	char* m_engineVolume = new char[strlen(colorengineVolume) + 1];
	strcpy(m_engineVolumer, engineVolume);

	// I think that this should be an enum

	char* m_gearType = new char[strlen(gearType) + 1];
	strcpy(m_gearType, gearType);//???
	char* m_madeIn = new char[strlen(madeIn) + 1];
	strcpy(m_madeIn, madeIn);
}

MyCar::MyCar(const MyCar& car)
{
	m_carId = car.m_carId;
	m_price = car.m_price;
	m_year = car.m_year;
	m_engineVolume = car.m_engineVolume;
	m_hand = car.m_hand;
	//cheak null?
	char* m_modelName = new char[strlen(car.modelName) + 1];
	strcpy(m_modelName, car.modelName);
	char* m_color = new char[strlen(car.color) + 1];
	strcpy(m_color, car.color);
	m_engineVolume = engineVolume;
	// I think that this should be an enum
	m_engineVolume = engineVolume;
	char* m_gearType = new char[strlen(car.gearType) + 1];
	strcpy(m_gearType, car.gearType);//???
	char* m_madeIn = new char[strlen(car.madeIn) + 1];
	strcpy(m_madeIn, car.madeIn);


	void MyCar::setCarId(const int& CarId);
{
	if (CarId < 100000 || CarId>99999999)
	{
		throw "Invalid input";
	}
	m_carId = carId;
}

void MyCar::setModelName(const char*& modelName)
{
	strcpy(m_modelName, modelName);
}

void MyCar::setPrice(const int& price)
{
	if (price < 0)
	{
		throw "Invalid input";
	}
	m_price = price;
}

void MyCar::setYear(const int& year)
{
	if (year < 1900 || year>2018)
	{
		throw "Invalid input";
	}
	m_year = year;
}

void MyCar::setColor(const char* color)
{
	strcpy(m_color, color);
}

void MyCar::setEngineVolume(const int engineVolume)
{
	if (engineVolume > 2000 || engineVolume < 1000)
	{
		throw "Invalid input";
	}
}

void MyCar::setGearType(const char* gearType)
{
	strcpy(m_gearType, gearType);
}

void MyCar::setMadeIn(const char* madeIn)
{
	strcpy(m_madeIn, madeIn);
}

void MyCar::etHand(const int& hand)
{
	if (hand < 0)
	{
		throw "Invalid input"
	}
	m_hand = hand;
}

int MyCar::getCarId() const
{
	return m_carId;
}

MyCar::char* getModelName() const
{
	return m_engineVolume;
}

int MyCar::getPrice() const
{
	return price;
}

int MyCar::getYear() const
{
	return m_year;
}

MyCar::char* getColor() const
{
	return m_color;
}

int MyCar::getEngineVolume() const
{
	return m_engineVolume;
}

MyCar::char* getGearType() const
{
	return m_gearType;
}

MyCar::char* getMadeIn() const
{
	return m_madeIn;
}

int MyCar::getHand() const
{
	return m_hand;
}



bool MyCar::compare(MyCar car)
{
	return (m_year < car.year);
}

void printCar(MyCar car)
{
	cout << "the carId is " << car.m_carId << endl;
	cout << "price of car is " << car.m_price << endl;
	cout << "year is " << car.m_year << endl;
	cout << "color is " << car.m_color << endl;
	cout << "Engine volume is " << car.m_engineVolume << endl;
	cout << "Gear type is " << car.m_gearType << endl;
	cout << "Made In " << car.m_madeIn << endl;
	cout << car.m_i hand <<"th hand" endl;

MyCar::~MyCar()
{
	delete []m_modelName;
	delete []m_color;
	delete []m_gearType;
	delete []m_madeIn;
}
