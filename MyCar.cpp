// MyCar.cpp
// Targil1
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

//#include "stdafx.h"
#include "MyCar.h"
#include <string>
#include <iostream>

using namespace std;

//Declaring a constructer function with default values to start MyCar objects.
MyCar::MyCar(int carId = 0, string modelName = "Not set yet", int price = 0, int year = 0, string color = "Not set yet",
	int engineVolume = 0, std::string gearType = "Not set yet", string madeIn = "Not set yet", int hand = 0) :
		m_carId(carId),
		m_price(price),
		m_year(year), 
		m_engineVolume(engineVolume), 
		m_hand(hand),
		m_modelName(modelName),
		m_color(color),
		m_gearType(gearType), 
		m_madeIn(madeIn) {}

MyCar::MyCar() {
	int carId = 0;
	string modelName = "Not set yet"; 
	int price = 0; 
	int year = 0; 
	string color = "Not set yet";
	int engineVolume = 0; 
	string gearType = "Not set yet";
	string madeIn = "Not set yet"; 
	int hand = 0;
}
	
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

//function that allows outer classes and functions to change m_carId
void MyCar::setCarId(const int& carId)
{
	if (carId < 100000 || carId>99999999)
		throw "Invalid car id";
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
		throw "Invalid price";
	m_price = price;
}

//function that allows outer classes and functions to change m_year
void MyCar::setYear(const int& year)
{
	if (year < 1900 || year>2018)
		throw "Invalid year";
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
	if (engineVolume > 2000 || engineVolume < 1000)
		throw "Invalid engine volume";
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
		throw "Invalid hand";
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


bool MyCar::compare(MyCar& car)
{
	return (m_year < car.m_year);
}

void MyCar::print()
{
	std::cout << "the carId is " << m_carId << endl;
	std::cout << "the model is: " << m_modelName << endl;//new
	std::cout << "price of car is " << m_price << endl;
	std::cout << "year is " << m_year << endl;
	std::cout << "color is " << m_color << endl;
	std::cout << "Engine volume is " << m_engineVolume << endl;
	std::cout << "Gear type is " << m_gearType << endl;
	std::cout << "Made In " << m_madeIn << endl;
	std::cout << m_hand << "th hand" << endl;
}

