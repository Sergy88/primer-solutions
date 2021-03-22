#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	const int N_SIZE = 20;
	char f_name[N_SIZE];
	char l_name[N_SIZE];
	cout<<"Enter your first name: __\b\b";
	cin.getline(f_name, N_SIZE);
	cout<<"\nEnter your last name:__\b\b";
	cin.getline(l_name, N_SIZE);
	char concat[N_SIZE * 2] {'\0'};
	strncat(concat, f_name, N_SIZE);
	strncat(concat, ", ", N_SIZE);
	strncat(concat, l_name, N_SIZE);
	cout<<"\n"<<concat<<"\n";
}
