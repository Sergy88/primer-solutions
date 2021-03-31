#include <iostream>
#include <string>
#include <fstream>

struct patron
{
	std::string name;
	double donate;
};

using namespace std;

const string I_FILE = "data.txt";

int main()
{
	bool gp = false, p = false;
	int number = 0;
	ifstream input;
	input.open(I_FILE);
	if (input.is_open())
	{
		(input >> number).get();
		patron * patrons = new patron[number];
		for (int i = 0; i < number; i++)
		{
			getline(input, patrons[i].name);
			(input >> patrons[i].donate).get();
		}
		cout << "\n\nGrand Patrons:\n";
		for (int i = 0; i < number; i++)
		{
			if (patrons[i].donate > 10000)
			{
				if (!gp)
					gp = true;
				cout << patrons[i].name << ":" << patrons[i].donate <<"$\n";
			}
		}
		if (!gp)
			cout << "none\n";
		cout << "Patrons:\n";
		for (int i = 0; i < number; i++)
		{
			if (patrons[i].donate <= 10000 && patrons[i].donate > 0)
			{
				if (!p)
					p = true;
				cout << patrons[i].name << ":" << patrons[i].donate << "$\n";
			}
		}
		if (!p)
			cout << "none\n";
	} else
		cout << "Some problems with file... operation aborted";
}
