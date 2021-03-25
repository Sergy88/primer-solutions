#include <iostream>
#include <string>

int main()
{
	using namespace std;
	cout << "This is a word counter. Please enter words to count. (\"done\" to stop)\n";
	string word;
	int counter = 0;
	cin >> word;
	while(word != "done")
	{
		counter++;
		cin >> word;
	}
	cout << "You`ve entered " << counter << " words.\n";
}	

