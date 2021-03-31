#include <iostream>

const int STR_SIZE = 20;
const int MEM_SIZE = 3;

struct bop{
	char fullname[STR_SIZE];
	char title[STR_SIZE];
	char bopname[STR_SIZE];
	int preference;
};

int main(){
	using namespace std;
	bop members[MEM_SIZE] = {
	{"Alex", "Lord", "Comma", 0},
	{"Bob", "King", "Professional", 2},
	{"Mary", "Queen", "Angel", 1}};
	cout << "Benevelop Order of Programmers Report\n";
	cout << "a) display by name	b) display by title\n";
	cout << "c) display by bop	d) display by preference\n";
	cout << "e) quit\n";
	char ch = 0;
	while (ch != 'q')
	{
		cin >> ch;
		switch (ch)
		{
			case 'a' :	
				for (int i = 0; i < MEM_SIZE; i++)
					cout << members[i].fullname << endl;
				break;
			case 'b' : 	
				for (int i = 0; i < MEM_SIZE; i++)
					cout << members[i].title << endl;
				break;
			case 'c' :	
				for (int i = 0; i < MEM_SIZE; i++)
					cout << members[i].bopname << endl;
				break;
			case 'd' :	
				for (int i = 0; i < MEM_SIZE; i++)
					switch (members[i].preference)
					{
						case 0 : cout << members[i].fullname << endl;
							break;
						case 1 : cout << members[i].title << endl;
						 	break;
						case 2 : cout << members[i].bopname << endl;
							break;
					}
		}
	}
}
