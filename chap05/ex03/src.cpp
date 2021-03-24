#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter numbers to accumulate sum. (0 to terminate)\n";
	int sum = 0, num = 0;
	cin >> num;
	while (num)
	{
		cout << "Sum now:" << (sum += num) << endl;
		cin >> num;
	}
}

