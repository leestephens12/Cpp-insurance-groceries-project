#ifndef LIFE_H
#define LIFE_H
#include <iostream>
#include <string>
#include "Insurance.h"
using namespace std;

class LifeInsurance : public Insurance {
	//instance variables
public:
	int age;
	bool smoker;

	//contructor with paramters that uses the parent Insurances contructor 
	LifeInsurance(int insuranceNumber, string customerName, string startOfPolicy, int custAge, bool custSmoker) :Insurance(insuranceNumber, customerName, startOfPolicy) {
		setAge(custAge);
		setSmoker(custSmoker);
	}

	//Getters and setters for new variables
	void setAge(int custAge) {
		if (custAge < 1 || custAge > 100) {
			throw invalid_argument("Age must be between 1-100");
		}
		else {
			age = custAge;
		}
	}

	int getAge() const {
		return age;
	}

	void setSmoker(bool custSmoker) {
		smoker = custSmoker;
	}

	bool getSmoker() const {
		return smoker;
	}

	//monthly payemnts
	double monthlyPayments() {
		double yearlyInsurance, monthlyInsurance;
		if (age <= 25) {
			yearlyInsurance = 1500.00;
		}
		else if (age > 26 && age < 45) {
			yearlyInsurance = 1500.00 * 1.5;
		}
		else {
			yearlyInsurance = 1500.00 * 2;
		}

		if (smoker == true) {
			yearlyInsurance += 250.00;
		}
		else {
			yearlyInsurance = yearlyInsurance - yearlyInsurance * 0.05;
		}

		yearlyInsurance = yearlyInsurance * 1.13;
		monthlyInsurance = yearlyInsurance / 12;

		return monthlyInsurance;
	}

	//displaying data to screen
	void displayData() {
		cout << "Insurance Number: " << insuranceNumber << endl << "Customer Name: " << customerName << endl << "Start Date of Policy:" << startOfPolicy << endl << "Age: " << age << endl<< "Smoker: " << smoker << endl << "Monthly Insurance Payments: " << monthlyPayments();
	}
}; 

#endif
#pragma once
