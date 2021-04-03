#include <iostream>

double factorial(double num)
{
	if (num < -1)
		return -1;
	if (num == 0 || num == 1)
		return 1;
	return num * factorial(num - 1);
}

int main()
{
	double num = 0;
	std::cout << "Enter number to find factorial (-1 to quit):\n";
	while (num != -1)
	{
		if (!(std::cin >> num))
		{
			std::cout << "Wrong input. Try again.\n";
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			continue;
		}
		std::cout <<"Factorial of " << num << ":" << factorial(num) << "\n";
	}
}
