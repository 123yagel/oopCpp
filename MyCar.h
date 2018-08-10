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

enum GearType{manualTransmission,automaticTransmission,semiautomaticTransmission,general};

class MyCar {
private:
	int m_carId;
	string m_modelName;
	int m_price;
	int m_year;
	string m_color;
	int m_engineVolume;
	GearType m_gearType; //enum declared before
	string m_madeIn;
	int m_hand; 
	
public:
	// ructor
	MyCar(int carId, string modelName, int price, int year, string color,int engineVolume, GearType gearType, string madeIn, int hand);
	
	//set functions
	
	void setCarId(  int& CarId);
	void setModelName(  string& modelName);
	void setPrice(  int& price);
	void setYear(  int& year);
	void setColor(  string& color);
	void setEngineVolume(  int& engineVolume);
	void setGearType(GearType gearType);
	void setMadeIn(  string& MadeIn);
	void setHand(  int& hand);

	//get functions
	
	int getCarId()  ;
	string getModelName() ;
	int getPrice() ;
	int getYear() ;
	string getColor() ;
	int getEngineVolume() ;
	GearType getGearType() ;
	string getMadeIn() ;
	int getHand() ;

	bool compare(MyCar& car);
	void print();
};


