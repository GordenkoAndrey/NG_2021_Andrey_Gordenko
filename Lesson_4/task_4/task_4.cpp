#include <iostream>
using namespace std;

int main()
{
	int hashcode = 0;
	const int str = 256;
	char line[str];

	cout << "Enter please sentence: ";
	cin.getline(line, 256);
	cout <<endl<< "Hashcode: " << endl;

	for (int i = 0; line[i] != '\0' ; i++)
	{
		if (line[i] == 'e' || line[i] == 'E' ||
			line[i] == 'y' || line[i] == 'Y' ||
			line[i] == 'u' || line[i] == 'U' ||
			line[i] == 'i' || line[i] == 'I' ||
			line[i] == 'o' || line[i] == 'O' ||
			line[i] == 'a' || line[i] == 'A')
			hashcode++;
		if (line[i] == ' ' || line[i] == '\0')
		{
			cout << hashcode;
			hashcode = 0;
		}
	}
	if (hashcode != 0)
	cout << hashcode;
}