#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;
	cout << "Enter 10 numbers for calculations\n";\
	double donations[10] {0};
	double temp = 0, sum = 0;
	int counter = 0;
	while (counter < 10 && cin >> temp)
		donations[counter++] = temp, sum += temp;
	double ave = sum / counter;
	cout << "Average:" << ave << "\n";
	cout << "Donations bigger than average:\n";
	cout << fixed << setprecision(2);
	for (int i = 0; i < counter; i++)
		if (donations[i] > ave)
			cout << donations[i] << "\n";
}
