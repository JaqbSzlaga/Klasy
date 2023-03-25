#include "cCar.h"



int cCar::carNumber = 0;

cCar::cCar()
{
	brand = "unknown";
	model = "unknown";
	doorsNumber = 0;
	engineCapacity = 0;
	combustionAvg = 0.0;
	carNumber++;
}
void cCar::writeCarNumber()
{
	cout << "\n\n ilosc utworzonych samochodow: " << cCar::carNumber;
}
cCar::cCar(string _brand, string _model, int _doorsNumber, int _engineCapacity, double _combustionAvg)
{
	brand = _brand;
	model = _model;
	doorsNumber = _doorsNumber;
	engineCapacity = _engineCapacity;
	combustionAvg = _combustionAvg;
	carNumber++;
}

cCar::~cCar()
{
}

double cCar::costTravelCalculate(double routeLength, double fuelPrice)
{
	return calculateBurning(routeLength)*fuelPrice;
}

double cCar::calculateBurning(double routeLength)
{
	return (combustionAvg * routeLength) / 100.0;;
}

void cCar::writeInfo()
{
	cout << "\n\n Marka: " << brand;
	cout << "\n Model: " << model;
	cout << "\n Ilosc drzwi: " << doorsNumber;
	cout << "\n Pojemnosc silnika: " << engineCapacity;
	cout << "\n Srednie spalanie: " << combustionAvg;
}
