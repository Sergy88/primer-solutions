#include <iostream>
#include <string>

int main()
{
	using namespace std;
	int sales[3][12] {};
	int year[3] {2018, 2019, 2020};
	string month[12] {"jan", "feb", "mar", "apr", "may", "jun", 
				"jul", "aug", "sep", "oct", "nov", "dec"};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cout << "\nEnter sales for " << month[j]<<" of " << year[i] <<":__\b\b";
			cin >> sales[i][j];
		}
	}
	int sum_year[3] {};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			sum_year[i] += sales[i][j];
		}
		cout << "Annual sales for " << year[i] <<": " << sum_year[i] << "\n";
	}
	cout << "Sales for all years:" << sum_year[0] + sum_year[1] + sum_year[2] << "\n";
}

