#include <iostream>

int main()
{
	using namespace std;
	int income = 0, tax_total = 0;
	cout << "Enter income amount:__\b\b";
	while (cin >> income && income >= 0)
	{
		if (income > 5000)
			tax_total += income > 15000 ? 10000 * 0.1 : (income - 5000) * 0.1;
		if (income > 15000)
			tax_total += income > 35000 ? 20000 * 0.15 : (income - 15000) * 0.15;
		if (income > 35000)
			tax_total += (income - 35000) * 0.2;
		cout << "\nTotal tax:" << tax_total << endl;
	}
}	
