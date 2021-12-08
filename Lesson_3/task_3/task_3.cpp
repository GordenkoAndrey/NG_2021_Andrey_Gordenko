#include <iostream>
#include <random>

using namespace std;

int main()
{
	srand(time(NULL));

 	int arr1[4];
	int arr2[4];
	int sum = 0;
	int mull = 1000;

	for (int i = 0; i < 4; i++)
	{
		arr1[i] = rand() % 10;
		arr2[i] = rand() % 10;
		sum += (arr1[i] * mull) + (arr2[i] * mull);
		mull /= 10;
	}
	cout << "Sum = " << sum << endl;
}