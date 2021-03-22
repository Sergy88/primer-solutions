#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string first_name, last_name;
	char grade;
	int age;
	cout<<"What is your first name? ___\b\b\b";
	getline(cin, first_name);
	cout<<"\nWhat is your last name? ___\b\b\b";
	getline(cin, last_name);
	cout<<"\nWhat latter grade do you deserve? _\b";
	cin>>grade;
	cout<<"\nWhat is your age? __\b\b";
	cin>>age;
	cout<<"\nName: "<< first_name<<", "<<last_name<<"\n"<<"Grade: "
	<<++grade<<"\n"<<"Age: "<< age<<"\n";
}
