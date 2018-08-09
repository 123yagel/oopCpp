// MyCar.cpp
// Targil1
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

#include "MyCar.h"
#include "stdafx.h"
#include <string.h>

using namespace std;

MyCar::MyCar(int carId = 0, string modelName = "Not set yet", int price = 0, int year = 0, string color = "Not set yet",
	int engineVolume = 0, GearType gearType = general, string madeIn = "Not set yet", int hand = 0) :
		m_carId(carId),
		m_price(price),
		m_year(year), 
		m_engineVolume(engineVolume), 
		m_hand(hand),
		m_modelName(modelName),
		m_color(color),
		m_gearType(gearType), 
		m_madeIn(madeIn) {}

MyCar::MyCar(const MyCar& car):
	m_carId(car.m_carId),
	m_price(car.m_price),
	m_year(car.m_year),
	m_engineVolume(car.m_engineVolume),
	m_hand(car.m_hand),
	m_modelName(car.m_modelName),
	m_color(car.m_color),
	m_gearType(car.m_gearType),
	m_madeIn(car.m_madeIn) {}

	


void MyCar::setCarId(const int& carId)
{
	if (carId < 100000 || carId>99999999)
		throw "Invalid input";
	m_carId = carId;
}

void MyCar::setModelName(const string& modelName)
{
	m_modelName = modelName;
}

void MyCar::setPrice(const int& price)
{
	if (price < 0)
		throw "Invalid input";
	m_price = price;
}

void MyCar::setYear(const int& year)
{
	if (year < 1900 || year>2018)
		throw "Invalid input";
	m_year = year;
}

void MyCar::setColor(const string& color)
{
	m_color = color;
}

void MyCar::setEngineVolume(const int& engineVolume)
{
	if (engineVolume > 2000 || engineVolume < 1000)
		throw "Invalid input";
	m_engineVolume = engineVolume;
}

void MyCar::setGearType(const GearType gearType)
{
	m_gearType = gearType;
}

void MyCar::setMadeIn(const string& madeIn)
{
	m_madeIn = madeIn;
}

void MyCar::setHand(const int& hand)
{
	if (hand < 0)
		throw "Invalid input";
	m_hand = hand;
}

int MyCar::getCarId() const
{
	return m_carId;
}

string MyCar::getModelName() const
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

string MyCar::getColor() const
{
	return m_color;
}

int MyCar::getEngineVolume() const
{
	return m_engineVolume;
}

GearType MyCar::getGearType() const
{
	return m_gearType;
}

string MyCar::getMadeIn() const
{
	return m_madeIn;
}

int MyCar::getHand() const
{
	return m_hand;
}



bool MyCar::compare(MyCar& car)
{
	return (m_year < car.m_year);
}

void MyCar::printCar(MyCar& car)
{
	cout << "the carId is " << car.m_carId << endl;
	cout << "price of car is " << car.m_price << endl;
	cout << "year is " << car.m_year << endl;
	cout << "color is " << car.m_color << endl;
	cout << "Engine volume is " << car.m_engineVolume << endl;
	cout << "Gear type is " << car.m_gearType << endl;
	cout << "Made In " << car.m_madeIn << endl;
	cout << car.m_hand << "th hand" << endl;
}

MyCar::~MyCar()
{}
