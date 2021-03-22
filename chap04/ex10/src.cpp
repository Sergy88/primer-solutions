#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main()
{
	array<double, 3> results;
	cout << "Enter first run result (40m):___\b\b\b";
	cin >> results.at(0);
	cout<<"\nEnter second run result (40m):___\b\b\b";
	cin >> results.at(1);
	cout << "\nEnter third run result (40m):___\b\b\b";
	cin >> results.at(2);
	cout << fixed;
	cout.precision(2); 
	cout << "\nAverage result is:"<< (results.at(0) + results.at(1) + results.at(2)) / 3 << endl;
}
