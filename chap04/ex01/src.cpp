#include <iostream>

int main()
{
	using namespace std;
	char first_name[20], last_name[20];
	char grade;
	int age;
	cout<<"What is your first name? ___\b\b\b";
	cin.getline(first_name, 20);
	cout<<"\nWhat is your last name? ___\b\b\b";
	cin.getline(last_name, 20);
	cout<<"\nWhat latter grade do you deserve? _\b";
	cin>>grade;
	cout<<"\nWhat is your age? __\b\b";
	cin>>age;
	cout<<"\nName: "<< first_name<<", "<<last_name<<"\n"<<"Grade: "
	<<++grade<<"\n"<<"Age: "<< age<<"\n";
}
