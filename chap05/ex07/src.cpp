#include <iostream>
#include <string>

using namespace std;

struct car
{
	string name;
	int year;
};

int main()
{
	int amount = 0, counter = 1;
	cout << "How many automobiles need to be added?:__\b\b";
	cin >> amount;
	car * cars = new car[amount];
	while (counter <= amount)
	{
		cout << "\nAutomobile #" << counter <<":\n";
		cout << "Enter manufacturer:____\b\b\b\b";
		cin >> cars[counter - 1].name;
		cout << "\nEnter pruduction year:____\b\b\b\b";
		cin >> cars[counter - 1].year;
		counter++;
	}
	cout << "Here is your collection:\n";
	counter = 0;
	while (counter < amount)
	{
		cout << cars[counter].year << " " << 	cars[counter].name << endl;
		counter++;
	}
	delete [] cars;
}
