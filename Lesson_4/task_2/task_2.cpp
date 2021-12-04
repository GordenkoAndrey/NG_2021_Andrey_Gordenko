#include <iostream>

using namespace std;

int main()
{
	bool str = true;
	char line1[256];
	char line2[256];

	cout << "Enter please first line: ";
	cin.getline(line1, 256);
	cout << "Enter please second line: ";
	cin.getline(line2, 256);
	cout << endl;

	for (int i = 0;line1[i] != '\0'; i++)
	{
		if (line1[i] != line2[i])
			str = false;
		break;
	}
	if (str == true)
		cout << "These lines are the same!" << endl;
	else
		cout << "These lines are not the same!" << endl;
}
