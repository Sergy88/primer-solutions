#include <iostream>
#include <string>

int main()
{
	using namespace std;
	struct Pizza
	{
		string comp;
		int dia;
		int weight;
	};
	Pizza *pizza = new Pizza;
	cout << "Enter pizza`s diameter (mm):___\b\b\b";
	cin >> pizza->dia;
	cout << "\nEnter pizza`s company:___\b\b\b";
	cin >> pizza->comp;
	cout << "\nEnter pizza`s weight(g):___\b\b\b";
	cin >> pizza->weight;
	cout << "Data.\n";
	cout << "Pizza`s company:" << pizza->comp << "\nPizza`s diameter:" << pizza->dia 
		<< "\nPizza`s weight:" << pizza->weight << "\n";
	delete pizza;
}
