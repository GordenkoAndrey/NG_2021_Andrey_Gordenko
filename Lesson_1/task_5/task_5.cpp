#include <iostream>
using namespace std;

int main()
{
	double ship_mass = 0;
	cout << "Enter please mass ship: ";
	cin >> ship_mass;
	cout << endl << "Amount of fuel needed: " << (ship_mass / 3 - 2) * 300 << endl;
}
