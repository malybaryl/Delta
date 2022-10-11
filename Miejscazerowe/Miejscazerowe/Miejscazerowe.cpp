#include <iostream>

using namespace std;

double a, b, c, d, p, x1, x2, x0;

int main()
{
		cout << "Wprowadz a:" << endl;
		cin >> a;

	if (a==0) 
	{
		cout << "Niepoprawna liczba" << endl;
		return 0;
	}
	
		cout << "Wprowadz b:" << endl;
		cin >> b;
		cout << "Wprowadz c:" << endl;
		cin >> c;

		d = (b * b) - (4 * a * c);
	
	if (d > 0)
	{
		x1 = (-b - sqrt(d)) / (2*a);
		x2 = (-b + sqrt(d)) / (2*a);
			
		cout << "x1 = " << x1 << " x2 = " << x2;
	}
	
	else if (d == 0)
	{
		x0 = -b / (2*a);

		cout << "x0 = " << x0;
	}
	
	else
	{
		cout << "Brak miejsc zerowych" << endl;
	}

	return 0;
	
}