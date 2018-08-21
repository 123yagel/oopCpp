/*
Baruch Rosen 208920884 05
Orit Herman 206924466 09
Yagel Ashkenazi 208761296 05
*/
// MyCar.cpp
// Targil1

#include "stdafx.h"
#include "MyCar.h"
#include <string>
#include <iostream>

using namespace std;

// ctor, including def ctor (see .h file)
MyCar::MyCar(int carId, const std::string modelName, int price, int year,
	const std::string color, int engineVolume, const std::string gearType,
	const std::string madeIn, int hand)
	:m_carId(carId), m_modelName(modelName), m_price(price), m_year(year),
	m_color(color), m_engineVolume(engineVolume), m_gearType(gearType),
	m_madeIn(madeIn), m_hand(hand)
{}

//function that allows outer classes and functions to change m_carId
void MyCar::setCarId(const int& carId)
{
	
	if (carId < 100000 || carId > 99999999)
		throw string("Invalid car id");
	
	m_carId = carId;
}

//function that allows outer classes and functions to change m_modelName
void MyCar::setModelName(const string& modelName)
{
	m_modelName = modelName;
}

//function that allows outer classes and functions to change m_price
void MyCar::setPrice(const int& price)
{
	if (price < 0)
		throw string("Invalid price");
	
	m_price = price;
}

//function that allows outer classes and functions to change m_year
void MyCar::setYear(const int& year)
{
	if (year < 0 || year>2018) //unneeded condition
		throw string("Invalid year");
	m_year = year;
}

//function that allows outer classes and functions to change m_color
void MyCar::setColor(const string& color)
{
	m_color = color;
}

//function that allows outer classes and functions to change m_engineVolume
void MyCar::setEngineVolume(const int& engineVolume)
{
	if (engineVolume < 200) //it was too strict i changed the values
		throw string("Invalid engine volume");
	
	m_engineVolume = engineVolume;
}

//function that allows outer classes and functions to change m_gearType
void MyCar::setGearType(const string& gearType)
{
	m_gearType = gearType;
}

//function that allows outer classes and functions to change m_madeIn
void MyCar::setMadeIn(const string& madeIn)
{
	m_madeIn = madeIn;
}

//function that allows outer classes and functions to change m_hand
void MyCar::setHand(const int& hand)
{
	if (hand < 0)
		throw string("Invalid hand");

	m_hand = hand;
}



//function that allows outer classes and functions to read the private var m_carId
int MyCar::getCarId() const
{
	return m_carId;
}

//function that allows outer classes and functions to read the private var m_modelName
string MyCar::getModelName() const
{
	return m_modelName;
}

//function that allows outer classes and functions to read the private var m_price
int MyCar::getPrice() const
{
	return m_price;
}

//function that allows outer classes and functions to read the private var m_year
int MyCar::getYear() const
{
	return m_year;
}

//function that allows outer classes and functions to read the private var m_color
string MyCar::getColor() const
{
	return m_color;
}

//function that allows outer classes and functions to read the private var m_engineVolume
int MyCar::getEngineVolume() const
{
	return m_engineVolume;
}

//function that allows outer classes and functions to read the private var m_gearType
string MyCar::getGearType() const
{
	return m_gearType;
}

//function that allows outer classes and functions to read the private var m_madeIn
string MyCar::getMadeIn() const
{
	return m_madeIn;
}

//function that allows outer classes and functions to read the private var m_hand
int MyCar::getHand() const
{
	return m_hand;
}

// true if the argument car is newer
bool MyCar::compare(MyCar& car)
{
	return (m_year < car.m_year);
}


// with indentation
void MyCar::print()
{
	std::cout << "ID: " << m_carId << endl;
	std::cout << "    Model: " << m_modelName << endl;//new
	std::cout << "    Price: " << m_price << '$' << endl;
	std::cout << "    Year: " << m_year << endl;
	std::cout << "    Color: " << m_color << endl;
	std::cout << "    Engine vol.: " << m_engineVolume << endl;
	std::cout << "    Gear type: " << m_gearType << endl;
	std::cout << "    Made In: " << m_madeIn << endl;
	std::cout << "    " << m_hand << "th hand" << endl;
}