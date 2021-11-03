#include <iostream>
using namespace std;

int main()
{
	double ship_mass = 0;
	double required_fuel = 0;
	cout << "Enter please mass ship: ";
	cin >> ship_mass;
	cout << endl;
	required_fuel = (ship_mass / 3 - 2) * 300;
	cout << "Amount of fuel needed: " << required_fuel << endl;
}
