#include <iostream>
using namespace std;

int main()
{
	const int money_pin_akk = 10;

	int pin[money_pin_akk] = { 1111,2222,3333,4444,5555,6666,7777,8888,9999,1010};
	int money[money_pin_akk] = {0,0,0,0,0,0,0,0,0,0};
	int bank_akk[money_pin_akk] = {1,2,3,4,5,6,7,8,9,10};
	int correct_account = 0;
	int correct_pin = 0;
	int action = 0;
	int amount = 0;
	
	while (true)
	{
		cout << "enter number bank card: ";
		cin >> correct_account;

		for (int i = 0; i < money_pin_akk; i++)
		{
			if (correct_account == bank_akk[i])
			{
				cout << "Enter please pin: ";
				cin >> correct_pin;

				for (int j = 0; j < money_pin_akk; j++)
				{
					if (correct_pin == pin[i])
					{
						cout << endl <<"Your money: " << money[i] << endl;
						cout << "What you can do? " << endl << "1 - add money" << endl << "2 - withdraw money" << endl;
						cin >> action;

						switch (action)
						{
						case 1:	cout << "Enter sum: ";
							cin >> amount;
							money[i] += amount;
							amount = 0;
							cout << endl; break;
						case 2: cout << "Enter sum: ";
							cin >> amount;
							if (amount > money[i])
							{
								cout << "Not enough money in the account!" << endl << endl; break;
							}
							money[i] -= amount; 
							amount = 0; break;
						default: cout << "Impossible action!" << endl << endl;
						}
						j = 10;
					}
					else
					{
						cout << "Wrong password!" << endl << endl;
						j = 10;
					}
				}
				break;
			}
			else if (i == 9)
			{
				cout << "Non-existent account!" << endl << endl;
			}
		}
	}
}