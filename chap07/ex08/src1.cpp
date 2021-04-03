#include <iostream>

const int SEASONS = 4;
const char* S_NAMES[] =  {"Spring", "Summer", "Fall", "Winter"};

void fill(double pa[SEASONS]);
void show(const double pa[SEASONS]);

int main()
{
	double expanses[SEASONS];
	fill(expanses);
	show(expanses);
	return 0;
}


void fill(double pa[SEASONS])
{
	using namespace std;
	for (int i = 0; i < SEASONS; i++)
	{
		cout << "Enter " << S_NAMES[i] << " expanses: ";
		cin >> pa[i];
	}
}

void show(const double pa[SEASONS])
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPANSES\n";
	for (int i = 0; i < SEASONS; i++)
	{
		cout << S_NAMES[i] << ": $" << pa[i] << endl;
		total += pa[i];
	}
	cout << "Total expanses: $" << total << endl;
}
