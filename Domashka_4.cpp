#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double a = 4.6;
	double b = 1.5;
	double y, t;
	y = a + log(b * b);
	if (y == b)
	{
		t = (2 * y + sqrt(y * y - a)) / (2 * b - sqrt(a * a - y));
	}
	if (y < b)
	{
		t = sin(y) * sin(y) + 1 / tan(a - b);
	}
	if (y > b)
	{
		t = pow(y * sin(a), 1 / 3) + 1 / sqrt(y * cos(b));
	}
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "y = " << y << endl;
	cout << "t = " << t << endl;
}