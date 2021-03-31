#include <iostream>
#include <fstream>

int main()
{
	using namespace std;
	ifstream input;
	input.open("text.txt");
	char temp = 0;
	int count = 0;
	while (input >> temp)
		count++;
	cout << count << " symbols in text.txt\n";
	input.close();
}
