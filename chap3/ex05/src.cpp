#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;
	long long us_pop;
	long long world_pop;
	cout<<"Enter the world`s population:__\b\b";
	cin>>world_pop;
	cout<<"Enter the US population:__\b\b";
	cin>>us_pop;
	cout<<fixed;
	cout<<setprecision(5);
	cout<<"The population of the us is "<< us_pop / (double) world_pop * 100<<"% of the world population.\n";
}
