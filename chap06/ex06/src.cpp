#include <iostream>
#include <string>

struct patron
{
	std::string name;
	double donate;
};

int main()
{
	bool gp = false, p = false;
	using namespace std;
	cout << "Enter amount of Patrons__\b\b";
	int number = 0;
	while (!(cin >> number));
	patron * patrons = new patron[number];
	for (int i = 0; i < number; i++)
	{
		cout << "\nEnter name of " << i + 1 << " patron\n";
		while (!(cin >> patrons[i].name));
		cout << "Enter amount of donation:__\b\b";
		while (!(cin >> patrons[i].donate));
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
}
