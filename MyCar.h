// myCar.h

#pragma once 
#include "stdafx.h"
#include <string.h>

#define MAX_MODELNAME_SIZE 40
#define MAX_COLOR_SIZE 40
#define MAX_MADEIN_SIZE 40
#define MAX_GEARTYPE_SIZE 40

enum m_gearType
  {
	manualTransmission, 
	automaticTransmission,
	semiautomaticTransmission 
}

class MyCar {
private:
	int m_carId;
	char* m_modelName[MAX_MODELNAME_SIZE];
	int m_price;
	int m_year;
	char* m_color[MAX_COLOR_SIZE];
	int m_engineVolume;
	enum m_gearType; //???
	char* m_madeIn[MAX_MODELNAME_SIZE];
	int m_hand; //??? seconed first etc...
	
public:
	//constructor
	MyCar(int carId, char* modelName, int price, int year, char* color,
		int engineVolume, char* gearType, char* madeIn, int hand);
	// copy constructor
	MyCar(const MyCar& car);

	//destructor
	~MyCar();

	void setCarId(const int& CarId);
	void setModelName(const char*& modelName);
	void setPrice(const int& price);
	void setYear(const int& year);
	void setColor(const char*& color);
	void setEngineVolume(const int& engineVolume);
	void setGearType(const char*& gearType);
	void setMadeIn(const char*& MadeIn);
	void setHand(const int& hand);

	int getCarId() const;
	char* getModelName()const;
	int getPrice()const;
	int getYear()const;
	char* getColor()const;
	int getEngineVolume()const;
	int getGearType()const;
	char* getMadeIn()const;
	void getHand()const;
	bool compare(MyCar& car);
	void printCar(MyCar& car);
};


