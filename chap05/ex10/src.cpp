#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter number of lines:__\b\b";
	int lines_n = 0;
	cin >> lines_n;
	cout << endl;
	for(int i = 0; i < lines_n; i++)
	{
		for (int j = 0; j < (lines_n - 1 - i); j++)
		{
			cout << ".";
		}
		for (int k = (i + 1); k != 0; k--)
		{
			cout << "*";
		}
	cout << "\n";
	}
}
