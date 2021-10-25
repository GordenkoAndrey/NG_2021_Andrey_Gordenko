#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter please value first number: ";
	cin >> a;
	cout << "Enter please value second number: ";
	cin >> b;
	cout << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Your nambers:" << endl << a << endl << b << endl;
}
