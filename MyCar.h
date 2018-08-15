// MyCar.h
// Targil1
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

#pragma once

#include <string>

#define MAX_MODELNAME_SIZE 40
#define MAX_COLOR_SIZE 40
#define MAX_MADEIN_SIZE 40
#define MAX_GEARTYPE_SIZE 40

/*enum GearType
{
	manualTransmission,
	automaticTransmission,
	semiautomaticTransmission,
	general
};
*/

class MyCar {
private:
	int m_carId;
	std::string m_modelName;
	int m_price;
	int m_year;
	std::string m_color;
	int m_engineVolume;
	std::string m_gearType;
	std::string m_madeIn;
	int m_hand; //??? seconed first etc...
	
public:
	//constructor
	MyCar(int carId, std::string modelName, int price, int year, std::string color,
		int engineVolume, std::string gearType, std::string madeIn, int hand);
	MyCar();
	// copy constructor - not needed (the auto one is good for us)
	// MyCar(const MyCar& car);
	
	void setCarId(const int& CarId);
	void setModelName(const std::string& modelName);
	void setPrice(const int& price);
	void setYear(const int& year);
	void setColor(const std::string& color);
	void setEngineVolume(const int& engineVolume);
	void setGearType(const std::string& gearType);
	void setMadeIn(const std::string& MadeIn);
	void setHand(const int& hand);
	int getCarId()const;
	std::string getModelName()const;
	int getPrice()const;
	int getYear()const;
	std::string getColor()const;
	int getEngineVolume()const;
	std::string getGearType()const;
	std::string getMadeIn()const;
	int getHand()const;

	bool compare(MyCar& car);
	void print();
};


