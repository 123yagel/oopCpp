// MyCar.cpp
// Targil1
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

#include "MyCar.h"
#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;


// constucter
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


	//set functions	
		
void MyCar::setCarId(int& carId)
{
	if (carId < 100000 || carId>99999999){
		throw "Invalid car id";}
	
	m_carId = carId;
}

void MyCar::setModelName(string& modelName)
{
	m_modelName = modelName;
}

void MyCar::setPrice(int& price)
{
	if (price < 0){
	throw "Invalid price";}
	
	
	m_price = price;
}

void MyCar::setYear(int& year)
{
	if (year < 1900 || year>2018){
	throw "Invalid year";}
	
	m_year = year;
}

void MyCar::setColor(string& color)
{
	m_color = color;
}

void MyCar::setEngineVolume(int& engineVolume)
{
	if (engineVolume > 2000 || engineVolume < 1000){
	throw "Invalid engine volume";}
	
	m_engineVolume = engineVolume;
}

void MyCar::setGearType(GearType gearType)
{
	m_gearType = gearType;
}

void MyCar::setMadeIn(string& madeIn)
{
	m_madeIn = madeIn;
}

void MyCar::setHand(int& hand)
{
	if (hand < 1){
	throw "Invalid hand";}
	
	m_hand = hand;
}


	//get functions

int MyCar::getCarId()  
{
	return m_carId;
}

string MyCar::getModelName()  
{
	return m_modelName;
}

int MyCar::getPrice()  
{
	return m_price;
}

int MyCar::getYear()  
{
	return m_year;
}

string MyCar::getColor()  
{
	return m_color;
}

int MyCar::getEngineVolume()  
{
	return m_engineVolume;
}

GearType MyCar::getGearType()  
{
	return m_gearType;
}

string MyCar::getMadeIn()  
{
	return m_madeIn;
}

int MyCar::getHand()  
{
	return m_hand;
}


//compare function

bool MyCar::compare(MyCar& car)
{
	return (m_year < car.m_year);
}

//print car

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

