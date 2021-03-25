#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string months[] = {"jan", "feb", "mar", 
				"apr", "may", "jun", 
				"jul", "aug", "sep", 
				"oct", "nov", "dec"};
	int sales[12] {};
	int sum = 0;
	for(int i = 0; i < 12; i++)
	{
		cout << "\nEnter sales for " << months[i] <<":__\b\b";
		cin >> sales[i];
		sum += sales[i];
	}
	cout << "\nAnnual sales:" << sum << "\n";
}
