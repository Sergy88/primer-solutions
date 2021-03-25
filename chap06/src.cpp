#include <iostream>
#include <cctype>

int main()
{
	const int DIFF = 'a' - 'A';
	using namespace std;
	char temp;
	cout << "Start typing.\n";
	while (cin.get(temp) && temp != '@')
	{
		if (isdigit(temp))
			continue;
		else if (isalpha(temp))
			cout << (char)( isupper(temp) ? (temp + DIFF) : (temp - DIFF));
		else
			cout << temp;
	}
	cout << "\n";
}
