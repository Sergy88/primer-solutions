#include <iostream>
#include <string>

using namespace std;

int main()
{
	struct CandyBar
	{
		string name;
		double weight;
		int cal;
	};
	CandyBar *bararr = new CandyBar[3];
	bararr[0].name = "Mocha";
	bararr[0].weight = 22.2;
	bararr[0].cal = 500;
	bararr[1].name = "SNeck";
	bararr[1].weight = 33.2;
	bararr[1].cal = 600;
	bararr[2].name = "Mha";
	bararr[2].weight = 61.2;
	bararr[2].cal = 700;
	cout << "First Bar.\nName:" << bararr[0].name << "\nWeight:" << bararr[0].weight
		<< "\nCallories:" << bararr[0].cal << "\n\n";
	cout << "Second Bar.\nName:" << bararr[1].name << "\nWeight:" << bararr[1].weight
		<< "\nCallories:" << bararr[1].cal << "\n\n";
	cout << "Third Bar.\nName:" << bararr[2].name << "\nWeight:" << bararr[2].weight <<
		"\nCallories:" << bararr[2].cal << "\n\n";
	delete [] bararr;
}	
