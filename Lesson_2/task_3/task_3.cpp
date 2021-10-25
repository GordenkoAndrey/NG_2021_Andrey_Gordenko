#include <iostream>
using namespace std;

int main()
{
	int star = 0;

	cout << "Enter please number: ";
	cin >> star;
	cout << endl;

	for (int a = 0; a < star; a++)
	{
		for (int b = 0; b < star; b++)
		{
			if (a != 0 && a != star - 1 && b != 0 && b != star - 1)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}cout << endl;
	}
}