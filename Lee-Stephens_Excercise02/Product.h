#pragma once
#include <iostream>
using namespace std;

class Product {
	//private isntance variables
private:
	int ID;
	string name;
	double price;

public:
	//constructor
	Product(int idNum, string productName, double productPrice) {
		setID(idNum);
		setName(productName);
		setPrice(productPrice);
	}
	
	//Getters and Setters
	void setID(int idNum) {
		ID = idNum;
	}

	int getID() {
		return ID;
	}

	void setName(string productName) {
		name = productName;
	}

	string getName() {
		return name;
	}

	void setPrice(double productPrice) {
		if (productPrice > 0) {
			price = productPrice;
		}
		else {
			throw invalid_argument("Price must be greater than 0");
		}
	}

	double getPrice() {
		return price;
	}

	//Operator that will allow us to see which of the products have the highest price
	bool operator > (const Product& p) {
		if (price > p.price) {
			return true;
		}
		else {
			return false;
		}
	}
};
