#include <iostream>
#include <random>
using namespace std;

int main()
{
	srand(time(NULL));

 	int arr1[4];
	int arr2[4];
	int j = 0;
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	int mull = 1000;

	for (int i = 0; i < 4; i++)
	{
		arr1[i] = rand() % 10;
		arr2[i] = rand() % 10;
	}
	for (int i = 0; i < 4; i++)
	{
		while(j < 4)
		{
			cout << "arr1= " << arr1[j] << endl;
			j++;
		} 
		cout << "arr2= " << arr2[i] << endl;
	}
	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		arr1[i] *= mull;
		arr2[i] *= mull;
		mull /= 10;
	}

	num1 = arr1[0] + arr1[1] + arr1[2] + arr1[3];
	num2 = arr2[0] + arr2[1] + arr2[2] + arr2[3];

	cout << "num1= " << num1 << endl;
	cout << "num2= " << num2 << endl << endl;
	
	sum = num1 + num2;
	cout <<"sum= "<< sum << endl;
}