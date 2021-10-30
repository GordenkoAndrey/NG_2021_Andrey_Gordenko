#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int sum = 0;

	cout << "Enter please number: ";
	cin >> num;
	cout << endl;
	int number = num;

	while (number > 0)
	{
		sum += number % 10;
		number /= 10;
	}
	cout << "Sum: " << sum << endl;
}
