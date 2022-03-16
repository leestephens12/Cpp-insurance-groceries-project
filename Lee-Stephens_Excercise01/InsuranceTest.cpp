#include <iostream>
#include "Insurance.h"
#include "VehicleInsurance.h"
#include "LifeInsurance.h"
using namespace std;

int main() {
	//Creating objects
	Insurance* insurance;
	VehicleInsurance vehicleInsuranceOne(95548, "Lee Stephens", "May 27th, 2018", 2006, true);
	VehicleInsurance vehicleInsuranceTwo(95675, "Anne Mary", "June 20th, 2015", 2010, false);
	LifeInsurance lifeInsuranceOne(90876, "Lee Stephens", "April 27th, 2018", 35, true);
	LifeInsurance lifeinsuranceTwo(80764, "John Smith", "May 28th, 2012", 45, true);

	//Output for regular life insurance
	cout << "----Life Insurance Output----" << endl;
	cout << "Regular Output: " << endl;
	lifeInsuranceOne.displayData();

	//output for polymorphic life insurance
	cout << endl << endl << "Polymorphic: " << endl;
	insurance = &lifeinsuranceTwo;
	insurance->displayData();

	//output for vehicle insurance regular
	cout << endl << "----Vehicle Insurance----" << endl;
	cout << "Regular Output: " << endl;
	vehicleInsuranceOne.displayData();

	//output for polymorphic vehicle insurance
	cout << endl << endl << "Polymorphic: " << endl;
	insurance = &vehicleInsuranceTwo;
	insurance->displayData();
	return 0;
}