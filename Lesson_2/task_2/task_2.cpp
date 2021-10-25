#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int hash_code = 0;

	cout << "Enter please number: ";
	cin >> num;
	cout << endl;

	for (int a = num % 10; num != 0;)
	{
		if (num % 10 == num / 10 % 10)
			hash_code += num % 10;

		if (num < 10 && num == a)
			hash_code += num;
		num /= 10;
	}
	cout << "Hash-code: " << hash_code << endl;
}
