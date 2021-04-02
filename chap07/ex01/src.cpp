#include <iostream>

double harmonic_m(double, double);

int main()
{
	using namespace std;
	int a1 = 1, a2 = 1;
	double hm = 0.0;
	while (true)
	{
		cout << "Enter two numbers:\n";
		if ((!(cin >> a1)) || (!(cin >> a2)))
		{
			cout << "\nWrong data, try again.\n";
			cin.clear();
			while(cin.get() != '\n')
				continue;
			continue;
		}
		if ((!a1) || (!a2))
			break;
		cout <<"\nHarmonic mean:" << harmonic_m(a1, a2) << endl;
	}
}

double harmonic_m(double a1, double a2)
{
	return (2.0 * a1 * a2) / (a1 + a2);
}
