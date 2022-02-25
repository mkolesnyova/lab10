#include <iostream>;
#include <cmath>;
using namespace std;
void ff(double &a, double &b);
void ff(double &a, double &b)
{
	double c = sqrt(a * a + b * b);
	double s = 0.5 * a * b;
	double p = a + b + c;
	cout << " p= " << p << "; s= " << s;
	cout << endl;
}
int main()
{
	double a1, a2, b1, b2;
	cout << "vvedite a1 b1: ";
	cin >> a1 >> b1;
	ff(a1, b1);
	cout << endl;
	cout << "vvedite a2 b2: ";
	cin >> a2 >> b2;
	ff(a2, b2);
	cout << endl;
}