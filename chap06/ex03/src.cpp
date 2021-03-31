#include <iostream>

int main()
{
	using namespace std;
	cout << "Please enter one of the following choices:\n"
		<< "c) carnivore	" << "p) pianist\n" 
		<< "t) tree		" << "g) game\n";
	char ch = 0;
	cin >> ch;
	while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
	{
		cout << "Please enter a c, p, t or g.\n";
		cin >> ch;
	}
	switch(ch)
	{
		case 'c' : cout << "carnivore\n";
		break;
		case 'p' : cout << "pianist\n";
		break;
		case 't' : cout << "A mapple is a tree.\n";
		break;
		case 'g' : cout << "game";
	}
}
