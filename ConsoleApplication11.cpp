#include <iostream>;
using namespace std;
double fd(double a, double  b, double h);
double fd(double a, double  b, double h)
{
	double s = (a + b) / 2 * h;
	return s;
}
int  main()
{
	double a1, b1, a2, b2, h1, h2, s1, s2;
	cout << " vvedite a1 =";
	cin >> a1;
	cout << " vvedite b1 =";
	cin >> b1;
	cout << " vvedite h1 =";
	cin >> h1;
	cout << " vvedite a2 =";
	cin >> a2;
	cout << " vvedite b2 =";
	cin >> b2;
	cout << " vvedite h2 =";
	cin >> h2;
	s1 = fd(a1, b1, h1);
	s2 = fd(a2, b2, h2);
	cout << " s1 =" << s1;
	cout << endl;
	cout << " s2 =" << s2;
	cout << endl;
	return 0;
}