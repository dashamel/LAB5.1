// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double f(const double a, const double b, const double c); // прототип
int main()
{
	double s, t;
		cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = f(t, s, 2) + f(1, (s + t), (t - s));   

	cout << f(1, 1, 1) << endl;
	cout << "c = " << c << endl;
	return 0;
}
double f(const double a, const double b, const double c) // визначення
{
	return ((a + b + c) / (pow(sin(a * b), 2) + c * c));
}
