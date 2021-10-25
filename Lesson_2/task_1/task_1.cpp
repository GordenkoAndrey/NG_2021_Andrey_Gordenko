#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int sum = 0;

	cout << "Enter please number: ";
	cin >> num;
	cout << endl;

	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	cout <<"Sum: "<< sum << endl;
}
