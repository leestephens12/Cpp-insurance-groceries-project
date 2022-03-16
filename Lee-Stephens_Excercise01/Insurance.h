#ifndef INSURANCE_H
#define INSURANCE_H
#include <iostream>
using namespace std;

class Insurance {
public:
	int insuranceNumber;
	string customerName;
	string startOfPolicy;

	//Default constructor
	Insurance();

	//Contructor with parameters
	Insurance(int number, string name, string date) {
		setInsuranceNumber(number);
		setCustomerName(name);
		setStartOfPolicy(date);
	}

	//Getters And Setters
	void setInsuranceNumber(int number) {
		if (number > 0) {
			insuranceNumber = number;
		}
		else {
			cout << "Insurance number has to be bigger than 0\n";
		}

	}

	int getInsuranceNumber() {
		return insuranceNumber;
	}

	void setCustomerName(string name) {
		if (name.empty()) {
			throw invalid_argument("Customer Name cannot be left empty");
		}
		else {
			customerName = name;
		}
	}

	string getCustomerName() {
		return customerName;
	}

	void setStartOfPolicy(string date) {
		if (date.empty()) {
			throw invalid_argument("Start of policy date cannot be left empty");
		}
		else {
			startOfPolicy = date;
		}
	}

	string getStartOfPolicy() {
		return startOfPolicy;
	}

	//function monthly payments with no logic
	double monthlyPayments() {
		return 0.00;
	}

	//displaying data from object
	void displayData() {
		cout << "Insurance Number: " << insuranceNumber << endl << "Customer Name: " << customerName << endl << "Start Date of Policy:" << startOfPolicy << endl;
	}
};

#endif
#pragma once