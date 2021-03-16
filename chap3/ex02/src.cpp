#include <iostream>

const int coef_inch_feet = 12; //one feet = 12 inches
const double coef_kg_pound = 2.2;
const double coef_met_inch = 0.0254;

int main()
{
	using namespace std;
	int feets;
	int inches;
	int weight;
	
	cout<<"Enter your height in feet:__\b\b";
	cin>>feets;
	cout<<"Enter your height in inches:__\b\b";
	cin>>inches;
	cout<<"Enter your weight in pounds:__\b\b";
	cin>>weight;
	inches += feets * coef_inch_feet;
	double weight_kg = weight / coef_kg_pound;
	double height_meters = inches * coef_met_inch;
	double bmi = weight_kg / (height_meters * height_meters);
	cout<<"BMI:"<<bmi;
}
