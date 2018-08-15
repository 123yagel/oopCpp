// MyCar.h
// Targil1
// Baruch Rosen 208920884 05
// Orit Herman 206924466 09
// Yagel Ashkenazi 208761296 05

#pragma once

#include <string>

// represent a car in a store
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
	int m_hand; // 0 = new, 1 = 1st hand, etc.
	
public:
	// constructor, including def ctor -> with default values
	// can throw string exception when one of the parameters is out of range
	MyCar(int carId = 0, string modelName = "Not set yet",
		int price = 0, int year = 0, string color = "Not set yet",
		int engineVolume = 0, std::string gearType = "Not set yet",
		string madeIn = "Not set yet", int hand = 0);

	//MyCar(); ^

	// MyCar(const MyCar& car);
		// copy constructor - not needed (the auto one is good for us)
		// אבל אולי צריך בכל זאת בגלל שככה כתוב?
	

		// setters:

	// car id in range 100000 to 99999999
	// or it will throw string exception
	void setCarId(const int& CarId);

	void setModelName(const std::string& modelName);

	// price >= 0, or string exception will be thrown
	void setPrice(const int& price);

	// year in range 1900 to 2018, or string exception will be thrown
	void setYear(const int& year);

	void setColor(const std::string& color);

	// engineVolume in range 1000 to 2000, or string exception will be thrown
	void setEngineVolume(const int& engineVolume);

	void setGearType(const std::string& gearType);

	void setMadeIn(const std::string& MadeIn);

	// hand >= 0, or string exception will be thrown
	void setHand(const int& hand);

		// getters:

	int getCarId() const;
	std::string getModelName() const;
	int getPrice() const;
	int getYear() const;
	std::string getColor() const;
	int getEngineVolume() const;
	std::string getGearType() const;
	std::string getMadeIn() const;
	int getHand() const;

	// true if the argument car is newer
	bool compare(MyCar& car);

	// print car detailes to `cout`
	void print();
};


