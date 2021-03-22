#include <iostream>
#include <string>

using namespace std;

int main()
{
	struct Pizza
	{
		string name;
		int dia;
		int weight;	
	};
	Pizza piz;
	cout << "Enter pizza`s name: ___\b\b\b";
	cin>>piz.name;
	cout << "\nEnter pizza`s diameter (mm):___\b\b\b";
	cin>>piz.dia;
	cout << "\nEnter pizza`s weight: (g): ___\b\b\b";
	cin>>piz.weight;
	cout << "\nData entered:\n" << "Name: " <<  piz.name << "\nDiameter: " << piz.dia 
		<< "\nWeight: " << piz.weight << "\n";
}
