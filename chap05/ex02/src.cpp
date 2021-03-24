#include <iostream>
#include <array>
#include <iomanip>
#include <cfloat>

int main()
{
	using namespace std;
	cout << "long double max value:" << DBL_MAX << endl;
	cout << "long double size:" << sizeof(long double) << endl;
	const int ARR_SIZE = 101;
	array<long double, ARR_SIZE> factorials;
	factorials.at(0) = factorials.at(1) = 1.0;
	for(int i = 2; i < ARR_SIZE; i++)
		factorials.at(i) = factorials.at(i - 1) * i;
	cout<<fixed;
	for(int i = 0; i < ARR_SIZE; i++)
		cout << i << "! = " << factorials.at(i) << "\n";
}
