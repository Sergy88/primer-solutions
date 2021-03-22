#include <iostream>
#include <string>

int main()
{
	std::string f_name, l_name;
	std::cout<<"Enter your first name ___\b\b\b";
	std::getline(std::cin, f_name);
	std::cout<<"Enter your last name ___\b\b\b";
	std::getline(std::cin, l_name);
	std::string concat = f_name + " ," + l_name;
	std::cout<<"\nHere is the information in as a single string: "<<concat;	
}
