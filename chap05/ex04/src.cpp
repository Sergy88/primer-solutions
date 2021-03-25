#include <iostream>
#include <iomanip>

int main()
{
	using namespace std;
	cout << fixed << setprecision(2);
	cout << "Dafna	invested $100 at simple interest (5%)\n"
		<<"Cleo		invested $100 at compound interest (5%)";
	cout << "Calculations:\n";
	const double D_INTEREST = 0.1, C_INTEREST = 0.05;
	double d_inv = 100, c_inv = 100, d_prof = 0, c_prof = 0;
	for (int i = 1; (d_inv + d_prof) >= (c_inv + c_prof); i++)
	{
		d_prof += d_inv * D_INTEREST;
		c_prof += (c_inv + c_prof) * C_INTEREST;
		cout << i <<"	year results: Dafna accumulations: " << d_inv + d_prof 
			<< " <=> Cleo accumulations: " << c_inv + c_prof << "\n";
	}
}
