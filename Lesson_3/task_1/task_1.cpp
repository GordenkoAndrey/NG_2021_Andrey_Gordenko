#include <iostream>
#include <random>
using namespace std;

int main()
{
	int arr[10];
	int num = 0;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter please array elements: ";
		cin >> arr[i];
	}
	cout << endl;
	cout << "Enter please number: ";
	cin >> num;
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		arr[i] += num;
	}
	cout << "Your numbers: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}
