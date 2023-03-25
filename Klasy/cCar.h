#pragma once
#include <iostream>
using namespace std;

class cCar
{	
	string brand;
	string model;
	int doorsNumber;
	int engineCapacity;
	double combustionAvg;
	static int carNumber;
	double calculateBurning(double routeLength);

public:

	cCar();
	cCar(string _brand, string _model, int _doorsNumber, int _engineCapacity, double _combustionAvg);
	~cCar();
	double costTravelCalculate(double routeLength, double fuelPrice);
	void writeInfo();
	static void writeCarNumber();

	void setBrand(string brandCarName)
	{
		brand = brandCarName;
	}
	string getBrand()
	{
		return brand;
	}

	void setModel(string modelCar)
	{
		model= modelCar;
	}
	string getModel()
	{
		return model;
	}

	void setDoorsNumber(int doorsNumberCar)
	{
		doorsNumber = doorsNumberCar;
	}
	int getDoorsNumber()
	{
		return doorsNumber;
	}

	void setEngineCapacity(int engineCapacityCar)
	{
		engineCapacity = engineCapacityCar;
	}
	int getEngineCapacity()
	{
		return engineCapacity;
	}

	void setCombustionAvg(double combustionAvgCar)
	{
		combustionAvg = combustionAvgCar;
	}
	double getCombustionAvg()
	{
		return combustionAvg;
	}




};

