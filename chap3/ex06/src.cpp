#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;
	int spent_liters;
	int run_km;
	cout<<fixed;
	cout<<setprecision(2);
	cout<<"Enter milage:__\b\b";
	cin>>run_km;
	cout<<"Enter gas spent liters:__\b\b";
	cin>>spent_liters;
	cout<<"Your vehicle consumption is " << spent_liters / ((double) run_km / 100) << " liters per 100km.\n";
}
