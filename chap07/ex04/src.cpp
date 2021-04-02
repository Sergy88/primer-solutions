#include <iostream>

using namespace std;

long double probability(unsigned nums, unsigned picks)
{
	long double result = 1;
	for(long double n = nums, p = picks; p > 0; p --, n--)
		result *= n / p;
	return result;
}

int main()
{
	unsigned choices, choices1, picks, picks1;
	cout << "Enter the total number of choices on the game card and the number of picks allowed:\n";
	cin >> choices >> picks;
	cout << "\nEnter the total number of choices on the game card and the number of picks allowed (super number):\n";
	cin >> choices1 >> picks1;
	cout << "\nYou have one chance in:" << probability(choices, picks) * probability(choices1, picks1);
}
