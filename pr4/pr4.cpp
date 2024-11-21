#include <iostream>
using namespace std;
#define n 1
#if n==1
#define z 1
#define t 2
#define y t+z
#define a (8*pow(z,2)+1)/(y+pow(t,2))
#define p "Задание 1\n"
#elif n==2
#define x 1.82
#define y 1.25
#define z (sqrt(15*y))/(y+ctgx)
#define ctgx cos(x)/sin(x)
#define a (y-z/y-x)/(cos(x)/(pow((x-y),2)))
#define p "Задание 2\n"
#endif
int main()
{
	setlocale(0, "rus");
	int numb;
	cin >> numb;
	if (numb != 3)
	{
		cout << p;
		cout << ("%f", a);
	}else
	{
		cout << "Задание 3\n";
		cout << "Введите угол α\n";
		double alpha;
		cin >> alpha;
		cout << cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);
	}

}
