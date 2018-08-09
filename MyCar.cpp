// MyCar.cpp
// Targil1
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

#include "MyCar.h"
#include "stdafx.h"
#include <string.h>
#include <iostream>

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
/*
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

	*/


void MyCar::setCarId(const int& carId)
{
	if (carId < 100000 || carId>99999999)
		throw "Invalid car id";
	m_carId = carId;
}

void MyCar::setModelName(const string& modelName)
{
	m_modelName = modelName;
}

void MyCar::setPrice(const int& price)
{
	if (price < 0)
		throw "Invalid price";
	m_price = price;
}

void MyCar::setYear(const int& year)
{
	if (year < 1900 || year>2018)
		throw "Invalid year";
	m_year = year;
}

void MyCar::setColor(const string& color)
{
	m_color = color;
}

void MyCar::setEngineVolume(const int& engineVolume)
{
	if (engineVolume > 2000 || engineVolume < 1000)
		throw "Invalid engine volume";
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
		throw "Invalid hand";
	m_hand = hand;
}

int MyCar::getCarId() const
{
	return m_carId;
}

string MyCar::getModelName() const
{
	return m_modelName;
}

int MyCar::getPrice() const
{
	return m_price;
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

void MyCar::print()
{
	std::cout << "the carId is " << m_carId << endl;
	std::cout << "price of car is " << m_price << endl;
	std::cout << "year is " << m_year << endl;
	std::cout << "color is " << m_color << endl;
	std::cout << "Engine volume is " << m_engineVolume << endl;
	std::cout << "Gear type is " << m_gearType << endl;
	std::cout << "Made In " << m_madeIn << endl;
	std::cout << m_hand << "th hand" << endl;
}

