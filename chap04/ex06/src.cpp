#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
	string name;
	double weight;
	int cal;
};

int main()
{
	CandyBar carr[3];
	CandyBar snack1 {"Mocha", 340, 200};
	CandyBar snack2 {"SNeck", 360, 250};
	CandyBar snack3 {"Snackless", 310, 270};
	carr[0] = snack1;
	carr[1] = snack2;
	carr[2] = snack3;
	cout << carr[0].name << ".\n";
	cout <<"Weight:" << carr[0].weight <<"\n";
	cout << "Callories:"<<carr[0].cal << "\n\n";
	cout << carr[1].name << ".\n";
	cout << "Weight:" << carr[1].weight << "\n";
	cout << "Callories:" << carr[1].cal << "\n\n";
	cout << carr[2].name << ".\n";
	cout << "Weight:" << carr[2].weight << "\n";
	cout << "Callories:" << carr[2].cal << "\n\n";
}
