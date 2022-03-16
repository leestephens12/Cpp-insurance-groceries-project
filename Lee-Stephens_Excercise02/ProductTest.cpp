#include <iostream>
#include "Product.h"
using namespace std;

int main() {
	//Objects
	Product eggs(01, "eggs", 2.99);
	Product grapes(02, "grapes", 3.99);
	Product milk(03, "milk", -1.00);

	//this will output the product with the highest price
	cout << "Product with the highest price: ";
	if (milk > grapes && milk > eggs) {
		cout << milk.getName() <<endl;
	}
	else if (grapes > milk && grapes > eggs) {
		cout << grapes.getName() << endl;
	}
	else if (eggs > milk && eggs > grapes) {
		cout << eggs.getName() << endl;
	}
	
}