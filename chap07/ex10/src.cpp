#include <iostream>

double calculate(double a, double b, double (*pf)(double c, double d));
double add(double a, double b);
double multiplicate(double a, double b);
double substruct(double a, double b);

int main()
{
	using namespace std;
	cout << "Enter pairs of nums:\n";
	double a, b;
	double (*pf[3])(double, double);
	pf[0] = add;
	pf[1] = multiplicate;
	pf[2] = substruct;
	while (!(cin >> a))
	{
		cin.clear();
		while(cin.get() != '\n')
			continue;
		cout << "retry input...\n";
	}
	while (!(cin >> b))
	{
		cin.clear();
		while(cin.get() != '\n')
			continue;
		cout << "retry input...\n";
	}
	cout << "Add:";
	cout << calculate(a, b, pf[0]) << endl;
	cout << "Substruct:";
	cout << calculate(a, b, pf[1]) << endl;
	cout << "Multiplcate:";
	cout << calculate(a, b, pf[2]) << endl;
}

double add(double a, double b)
{
	return a + b;
}

double multiplicate(double a, double b)
{
	return a * b;
}

double substruct(double a, double b)
{
	return a - b;
}

double calculate(double a, double b, double (*pf)(double c, double d))
{
	return (pf)(a,b);
}
