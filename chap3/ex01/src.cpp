#include <iostream>

const int coeff  = 12; //One feet contains 12 inches

int main()
{
	using namespace std;

	int inches;
	cout<<"Enter your value:__"<<"\b\b";
	cin>>inches;
	int remain = inches % coeff;
	int feet = inches / coeff;
	cout<<"Equals:"<<feet<<" feet and "<<remain<<" inches.";
}
