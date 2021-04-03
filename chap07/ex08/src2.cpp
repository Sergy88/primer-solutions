#include <iostream>

const int SEASONS = 4;

struct expanses
{
	double values[SEASONS];
};

const char* S_NAMES[] =  {"Spring", "Summer", "Fall", "Winter"};

void fill(expanses *exp);
void show(const expanses *exp);

int main()
{
	expanses exp;
	fill(&exp);
	show(&exp);
	return 0;
}

void fill(expanses * exp)
{
	using namespace std;
	for (int i = 0; i < SEASONS; i++)
	{
		cout << "Enter " << S_NAMES[i] << " expanses: ";
		cin >> exp->values[i];
	}
}

void show(const expanses *exp)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPANSES\n";
	for (int i = 0; i < SEASONS; i++)
	{
		cout << S_NAMES[i] << ": $" << exp->values[i] << endl;
		total += exp->values[i];
	}
	cout << "Total expanses: $" << total << endl;
}
