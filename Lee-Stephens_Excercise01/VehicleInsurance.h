#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include "Insurance.h"
using namespace std;

class VehicleInsurance : public Insurance {
	//instance variables
public:
	int modelYear;
	bool greenVehicle;

	//constructor with parent Insurance contructor design
	VehicleInsurance(int insuranceNnumber, string customerName, string startOfPolicy, int year, bool green):Insurance(insuranceNnumber, customerName, startOfPolicy) {
		setModelYear(year);
		setGreenVehicle(green);
	}


	//Getters and Setters for new variables
	void setModelYear(int year) {
		if (year <= 2020 && year >= 2005) {
			modelYear = year;
		}
		else {
			throw invalid_argument("Cars model year must be greater than 2005 and smaller than 2020");
		}

	}

	int getModelYear() {
		return modelYear;
	}

	void setGreenVehicle(bool green) {
		greenVehicle = green;
	}

	bool getGreenVehicle() {
		return greenVehicle;
	}


	//Monthly payment calculator
	double monthlyPayments() {
		int carAge = 2020 - modelYear;
		double yearlyInsurance, monthlyInsurance;
		if (carAge <= 5) {
			yearlyInsurance = 3000.00;
		}
		else if (carAge >= 6 && carAge <= 10) {
			yearlyInsurance = 3000.00 * 1.5;
		}
		else {
			yearlyInsurance = 3000.00 * 2;
		}

		if (greenVehicle == false) {
			yearlyInsurance += 300.00;
		}
		else {
			yearlyInsurance = yearlyInsurance - yearlyInsurance * 0.10;
		}
		yearlyInsurance = yearlyInsurance * 1.13;
		monthlyInsurance = yearlyInsurance / 12;
		return monthlyInsurance;
	}


	//Displaying data from object
	void displayData() {
		cout << "Insurance Number: " << insuranceNumber << endl << "Customer Name: " << customerName << endl << "Start Date of Policy:" << startOfPolicy << endl<< "Car Model Year: " << modelYear << endl << "Green Vehicle: " << greenVehicle << endl<< "Monthly Insurance Payments: " << monthlyPayments();
	}
};

#endif
#pragma once