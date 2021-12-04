#include <iostream>

using namespace std;

int main()
{
	char input[256];

	cout << "Enter please text: ";
	cin.getline(input, 256);
	cout << endl;

	for (int i = 0; input[i] != '\0' ; i++)
	{
		if (input[i] == 'f' && input[i + 1] == 'u' &&
			input[i + 2] == 'c' && input[i + 3] == 'k')
		{
			for (int j = i; j < i + 4; j++)
			{
				input[j] = '*';
			}
		}
	}
	for (int i = 0; input[i] != '\0'; i++)
	{
		cout << input[i];
	}
}
