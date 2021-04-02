#include <iostream>

int input(double*, int);
double avrg(const double*, int size);
void show(const double*, int size);

const int MAX_IN = 10;
using namespace std;

int main()
{
	double scores[10]{0};
	int inp_c = input(scores, MAX_IN);
	show(scores, inp_c);
}

int input(double * arr, int max_input)
{
	int input = 0;
	cout << "Enter golf scores (less than 10, press s to stop):\n";
	bool run = true;
	double temp;
	while (input < 10 && run)
	{
		cout << "Enter " << input + 1 << " result:";
		if(!(cin >> temp))
		{
			cin.clear();
			if (cin.get() == 's')
			{	
				run = false;
				break;
			}
			while (cin.get() != '\n')
				continue;
			cout << "Bad input. Try again.\n";
			continue;
		}
		arr[input++] = temp;
	}
	return input;
}

double avrg (const double * arr, int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return (sum / size);
}

void show(const double * arr, int size)
{
	cout << "\n\nResults:\n";
	for (int i = 0; i < size; i++)
		cout << arr[i] << ((i == size - 1) ?'.':',');
	cout << "\nAverage:\n" << avrg (arr, size) << endl;
}
