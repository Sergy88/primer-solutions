#include <iostream>

using namespace std;

int fill_array(double * darr, int size)
{
	int counter = 0;
	cout << "Fill num array:\n";
	while (cin >> darr[counter] && counter < size)
		counter++;
	return counter;
}

void show_array(double * darr, int size)
{
	cout << "\nHere is array:\n";
	for (int i = 0; i < size; i++)
		cout << darr[i] << ((i < size -1)?',':'.');
	cout << endl;
}

void reverse_array(double * darr, int size)
{
	double temp;
	int counter = 0;
	for (int i = (size - 1); i > counter; i--, counter++)
	{
		temp = darr[counter];
		darr[counter] = darr[i];
		darr[i] = temp;
	}
}

int main()
{
	const int ARR_S = 10;
	double darr[ARR_S];
	int arr_s;
	arr_s = fill_array(darr, ARR_S);
	show_array(darr, arr_s);
	reverse_array(darr, arr_s);
	show_array(darr, arr_s);
}
