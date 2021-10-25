#include <iostream>
using namespace std;

//ax ^ 2 + bx - c = 0
//D = b ^ 2 - 4ac

int main()
{
	int a, b, c, Discriminant, x1, x2;
	cout << "Enter please value a: ";
	cin >> a;
	cout << "Enter please value b: ";
	cin >> b;
	cout << "Enter please value c: ";
	cin >> c;
	cout << endl;
	Discriminant = b * b - 4 * a * c;
	if (Discriminant > 0) {
		x1 = (-b + sqrt(Discriminant)) / (2 * a);
		x2 = (-b - sqrt(Discriminant)) / (2 * a);
		cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
	}
	if (Discriminant == 0) {
		x1 = (-b + sqrt(Discriminant)) / (2 * a);
		cout << "x1 = " << x1 << endl;
	}
	if (Discriminant < 0) {
		cout << "No roots!!!" << endl;
	}
}
