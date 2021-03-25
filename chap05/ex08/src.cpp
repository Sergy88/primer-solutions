#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	int counter = 0;
	cout << "This is a word counter. Please enter words to count. (\"done\" to stop)\n";
	char str[20];
	cin >> str;
	while (strcmp(str, "done") != 0)
		{
			cin >> str;
			counter++;
		}
	cout << "You entered " << counter << "words.";
}
