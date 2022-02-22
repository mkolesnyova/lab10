#include <iostream>;
#include <cmath>;
using namespace std;
void ff(double *a, double *b);
void ff(double *a, double *b)
{
	double c = *b - *a;
	c = fabs(c);
	cout << "dlina =" << c;
	cout << endl;
	return;
}
void main()
{
	double a1, b1, a2, b2;
	cout << "a1= ";
	cin >> a1;
	cout << "b1= ";
	cin >> b1;
	ff(&a1, &b1);
	cout << "a2= ";
	cin >> a2;
	cout << "b2= ";
	cin >> b2;
	ff(&a2, &b2);
}