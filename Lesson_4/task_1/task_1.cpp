#include <iostream>

using namespace std;

int main()
{
    int number_haracters = 0;
    char input[256];

    cout << "Enter please text: ";
    cin.getline(input, 256);

    for (int i = 0; input[i] != '\0' ; i++)
    {
        if (input[i] <= ',' || input[i] <= '.' ||
            input[i] <= '!' || input[i] <= '?' ||
            input[i] <= ';' || input[i] <= ':' ||
            input[i] <= '-')
            number_haracters++;
        if (input[i] == ' ' || input[i] == '\'' || input[i] == '/')
            number_haracters--;
    }
    cout << "Number of haraccters: " << number_haracters << endl;
}