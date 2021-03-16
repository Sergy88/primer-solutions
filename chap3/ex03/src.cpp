#include <iostream>
#include <iomanip>

const int MIN_DEG = 60;
const int SEC_MIN = 60;

int main()
{
	using namespace std;
	int deg;
	int min;
	int sec;

	cout << "First, enter the degrees:__\b\b";
	cin >> deg;
	cout << "Next, enter the minutes of arc:__\b\b";
	cin >> min;
	cout << "Finally, enter the seconds of arc:__\b\b";
	cin >> sec;

	double res = deg + (double) min / MIN_DEG +  (double) sec / (SEC_MIN * MIN_DEG);

	cout << fixed;
	cout << setprecision(4);
	cout << res;
}
