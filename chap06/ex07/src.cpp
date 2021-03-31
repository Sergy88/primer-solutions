#include <iostream>
#include <string>

int main()
{
	using namespace std;
	cout << "Start enter words. q - to stop\n";
	string temp = "";
	int vowels = 0, consonants = 0, others = 0;
	while(temp != "q")
	{
		cin >> temp;
		if ('a' == temp[0] || 'e' == temp[0] || 'i' == temp[0] || 'o' == temp[0] || 'u' == temp[0] ||
			'A' == temp[0] || 'E' == temp[0] || 'I' == temp[0] || 'O' == temp[0] || 'U' == temp[0])
			vowels++;
		else if ((temp[0] > 'A' && temp[0] < 'Z') || (temp[0] > 'a' && temp[0] < 'z'))
			temp == "q"?:consonants++;
		else
			others++;
	}
	cout << vowels <<" words beginning with vowels\n" << consonants <<" words beginning with consonants\n"	<< others << " others\n";
}
