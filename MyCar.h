// MyCar.h
// Targil1
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

#pragma once 
#include "stdafx.h"
#include <string>

#define MAX_MODELNAME_SIZE 40
#define MAX_COLOR_SIZE 40
#define MAX_MADEIN_SIZE 40
#define MAX_GEARTYPE_SIZE 40

enum GearType
{
	manualTransmission,
	automaticTransmission,
	semiautomaticTransmission,
	general
};

class MyCar {
private:
	int m_carId;
	string m_modelName;
	int m_price;
	int m_year;
	string m_color;
	int m_engineVolume;
	GearType m_gearType;
	string m_madeIn;
	int m_hand; //??? seconed first etc...
	
public:
	//constructor
	MyCar(int carId, string modelName, int price, int year, string color,
		int engineVolume, GearType gearType, string madeIn, int hand);
	// copy constructor
	MyCar(const MyCar& car);

	//destructor
	~MyCar();

	void setCarId(const int& CarId);
	void setModelName(const string& modelName);
	void setPrice(const int& price);
	void setYear(const int& year);
	void setColor(const string& color);
	void setEngineVolume(const int& engineVolume);
	void setGearType(GearType gearType);
	void setMadeIn(const string& MadeIn);
	void setHand(const int& hand);

	int getCarId() const;
	string getModelName()const;
	int getPrice()const;
	int getYear()const;
	string getColor()const;
	int getEngineVolume()const;
	GearType getGearType()const;
	string getMadeIn()const;
	int getHand()const;

	bool compare(MyCar& car);
	void printCar(MyCar& car);
};


