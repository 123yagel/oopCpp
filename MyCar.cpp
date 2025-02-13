/*
Baruch Rosen 208920884 05
Orit Herman 206924466 09
Yagel Ashkenazi 208761296 05
*/
// MyCar.cpp
// Targil1

//#include "stdafx.h"
#include <string>
#include <iostream>

#include "MyCar.h"

using namespace std;

// ctor, including def ctor (see .h file)
<<<<<<< HEAD
MyCar::MyCar(std::string carId, const std::string modelName, int price, int year,
	const std::string color, int engineVolume, const std::string gearType,
	const std::string madeIn, int hand)
	: m_modelName(modelName), m_color(color), m_engineVolume(engineVolume), m_gearType(gearType), m_madeIn(madeIn)
{
	if (carId.length() != 7 && carId.length() != 8)
		throw "invalid car id";
	try{ std::stoi(carId); }		// check for numerical value. if can't, invalid_argument exception will be thrown.
	catch(...){ throw "invalid car id"; }
	if (price < 0)
		throw "negative price";
	if (year > 2018 || year < 1500)
		throw "invalid year";
	if (hand < 0)
		throw "negative hand";
	m_carId = carId;
	m_price = price;
	m_year = year;
	m_hand = hand;
}

//function that allows outer classes and functions to change m_carId
void MyCar::setCarId(const std::string& carId)
{
	if (carId.length() != 7 && carId.length() != 8)
		throw "invalid car id";
	try{ std::stoi(carId); }		// check for numerical value. if can't, invalid_argument exception will be thrown.
	catch(...){ throw "invalid car id"; }
=======
/*************************************************************************
* שם הפונקציה :name function *
* הסבר על הקלט לפונקציה :Input The *
* הסבר על הפלט של הפונקציה :output The *
* דרך הביצוע בצורה כללית :operation Function The *
*************************************************************************/

/*
function name: MyCar
The input: none
The output: none
the function operation: preducing a default car
*/
MyCar::MyCar(int carId, const std::string modelName, int price, int year,
	const std::string color, int engineVolume, const std::string gearType,
	const std::string madeIn, int hand)
{
	if (carId > 99999999)
		throw string("Invalid car id");
	if (price < 0)
		throw string("Invalid price");
	if (year < 0 || year>2018)
		throw string("Invalid year");
	if (engineVolume < 0)
		throw string("Invalid engine volume");
	if (hand < 0)
		throw string("Invalid hand");

	m_carId = carId;
	m_modelName = modelName;
	m_price = price;
	m_year = year;
	m_color = color;
	m_engineVolume = engineVolume;
	m_gearType = gearType;
	m_madeIn = madeIn;
	m_hand = hand;
}

/*
function name: setCarId
The input: int
The output: int
the function operation: allow access to the ID
*/
void MyCar::setCarId(const int& carId)
{
	if (carId > 99999999) // 7-8 digits
		throw string("Invalid car id");
>>>>>>> adding-class-for-menu
	m_carId = carId;
}

/*
function name: setModelName
The input: string
The output: string
the function operation: allow access to the model name
*/

void MyCar::setModelName(const string& modelName)
{
	m_modelName = modelName;
}

/*
function name: setPrice
The input: int
The output: int
the function operation: allow access to the price
*/

void MyCar::setPrice(const int& price)
{
	if (price < 0)
		throw string("Invalid price");
	m_price = price;
}

/*
function name: setYear
The input: int
The output: int
the function operation: allow access to the year
*/

void MyCar::setYear(const int& year)
{
	if (year < 0 || year>2018)
		throw string("Invalid year");
	m_year = year;
}

/*
function name: setColor
The input: string
The output: string
the function operation: allow access to the color
*/

void MyCar::setColor(const string& color)
{
	m_color = color;
}

/*
function name: setEngineVolume
The input: int
The output: int
the function operation: allow access to the engine vol.
*/

void MyCar::setEngineVolume(const int& engineVolume)
{
	if (engineVolume < 0)
		throw string("Invalid engine volume");
	m_engineVolume = engineVolume;
}

/*
function name: setCarId
The input: string
The output: string
the function operation: allow access to the gearType
*/

void MyCar::setGearType(const string& gearType)
{
	m_gearType = gearType;
}

/*
function name: setMadeIn
The input: string
The output: string
the function operation: allow access to the madeIn
*/
void MyCar::setMadeIn(const string& madeIn)
{
	m_madeIn = madeIn;
}

/*
function name: setHand
The input: int
The output: int
the function operation: allow access to the hand
*/
void MyCar::setHand(const int& hand)
{
	if (hand < 0)
		throw string("Invalid hand");
	m_hand = hand;
}

<<<<<<< HEAD


//function that allows outer classes and functions to read the private var m_carId
std::string MyCar::getCarId() const
=======
/*
function name: getCarId
The input: none
The output: int
the function operation: allow access to the ID
*/
int MyCar::getCarId() const
>>>>>>> adding-class-for-menu
{
	return m_carId;
}

/*
function name: getModelName
The input: none
The output: string
the function operation: allow access to the model name
*/

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
bool MyCar::compare(MyCar otherCar)
{
	return (otherCar.m_year > (this->m_year));
}


// with indentation
void MyCar::print()
{
	std::cout << "ID: " << id2string() << endl;
	std::cout << "    Model: " << m_modelName << endl;//new
	std::cout << "    Price: " << m_price << '$' << endl;
	std::cout << "    Year: " << m_year << endl;
	std::cout << "    Color: " << m_color << endl;
	std::cout << "    Engine vol.: " << m_engineVolume << endl;
	std::cout << "    Gear type: " << m_gearType << endl;
	std::cout << "    Made In: " << m_madeIn << endl;
	std::cout << "    " << m_hand << "th hand" << endl;
}

std::string MyCar::id2string() {
	// 8 digs <==> no leading zero (acording to wikipedia)
	string id_str = std::to_string(m_carId);
	while (id_str.length() < 7)
		id_str.insert(0, 1, '0');
	id_str.insert(5, 1, '-');
	if (id_str.length() == 9) // 8 digs + '-'
		id_str.insert(3, 1, '-'); // 123-45-678
	else 
		id_str.insert(2, 1, '-');  // 12-345-67  or 00-000-00..
	return id_str;
}
