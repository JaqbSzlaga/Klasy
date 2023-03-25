#include <iostream>
#include "cCar.h"
#include "Klasy.h"


using namespace std;

int main()
{
	cCar car1;
	car1.writeInfo();
	car1.setBrand("Fiat");
	car1.setModel("126p");
	car1.setDoorsNumber(2);
	car1.setEngineCapacity(650);
	car1.setCombustionAvg(6.0);

	cout << "\n Marka: " << car1.getBrand();
	cout << "\n Model: " << car1.getModel();
	cout << "\n Ilosc drzwi: " << car1.getDoorsNumber();
	cout << "\n Pojemnosc silnika: " << car1.getEngineCapacity();
	cout << "\n Srednie spalanie: " << car1.getCombustionAvg();
	car1.writeInfo();

	cCar car2("Syrena", "105", 2, 800, 7.6);
	car2.writeInfo();

	double kosztPrzejazdu = car2.costTravelCalculate(30.5, 4.85);
	cout << "\n\n Koszt przejazdu: " << kosztPrzejazdu;

	cCar* car3;
	car3 = new cCar();
	car3->setBrand("Fiat");
	car3->setModel("126p");
	car3->setDoorsNumber(2);
	car3->setEngineCapacity(650);
	car3->setCombustionAvg(6.0);

	cout << "\n Marka: " << car3->getBrand();
	cout << "\n Model: " << car3->getModel();
	cout << "\n Ilosc drzwi: " << car3->getDoorsNumber();
	cout << "\n Pojemnosc silnika: " << car3->getEngineCapacity();
	cout << "\n Srednie spalanie: " << car3->getCombustionAvg();
	car3->writeInfo();

	cCar* car4;
	car4 = new cCar("Syrena", "105", 2, 800, 7.6);
	car4->writeInfo();
	kosztPrzejazdu = car4->costTravelCalculate(30.5, 4.85);

	cout << "\n\n Koszt przejazdu: " << kosztPrzejazdu;
	cCar::writeCarNumber();

	car1.writeInfo();



	return 0;
}