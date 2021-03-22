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
	CandyBar snack {"Mocha Munch", 2.3, 350};
	cout<<"Candy bar.\n"<<"Name: "<< snack.name <<"\nWeight: "
		<< snack.weight<<"\nCallories: "<<snack.cal<<endl;
}

