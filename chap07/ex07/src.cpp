#include <iostream>
const int MAX = 5;

using namespace std;

double * fill_array(double * beg, double * end);
void show_array(double * beg, double * end);
void revalue(double r, double * beg, double * end);

int main()
{
	double props[MAX];
	double * end = fill_array(props, props + MAX);
	show_array(props, end);
	if (end != props)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while(!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input. Please enter a number: ";
		}
		revalue(factor, props, end);
		show_array(props, end);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

double * fill_array(double * beg, double * end)
{
	double temp;
	int counter = 1;
	while (beg != end)
	{
		cout << "Enter value#" << (counter++) << ":";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "Bad input. Process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		*beg++ = temp;
	}
	return beg;
}

void show_array(double * beg, double * end)
{
	int counter = 1;
	while(beg != end)
		cout << "Property #" << counter++ <<": $" << *(beg++) << "\n";
}

void revalue (double r, double * beg, double * end)
{
	while (beg != end)
		*(beg++) *=  r;
}
