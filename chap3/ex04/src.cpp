#include <iostream>

const int HOURS_DAY = 24;
const int MINS_HOUR = 60;
const int SECS_MIN = 60;

int main()
{
	long long seconds;
	int secs;
	int mins;
	int hours;
	int days;
	using namespace std;
	cout << "Please enter the number of seconds:__\b\b";
	cin >> seconds;
	days = seconds /  (HOURS_DAY * MINS_HOUR * SECS_MIN);
	seconds = seconds %  (HOURS_DAY * MINS_HOUR * SECS_MIN);
	hours = seconds / (MINS_HOUR * SECS_MIN);
	seconds = seconds %  (MINS_HOUR * SECS_MIN);
	mins = seconds / SECS_MIN;
	secs = seconds % SECS_MIN;
	cout<<seconds<<" seconds = "<< days <<" days, "<<hours<<" hours, "<< mins << " minutes, "<< secs<<" seconds. \n";
}
