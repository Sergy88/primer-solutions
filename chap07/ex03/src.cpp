#include <iostream>

using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show(box b)
{
	cout << "Name:" << b.maker << endl;
	cout << "Height:" << b.height << endl;
	cout << "Width:" << b.width << endl;
	cout << "Length:" << b.length << endl;
	cout << "Volume:" << b.volume << endl << endl;
}

void calc_vol (box * b)
{
	b->volume = b->height * b->width * b->length;
}

int main()
{
	box b;
	cout << "Fill parameters of box.\n" << "Enter maker:__\b\b";
	cin >> b.maker;
	cout << "\nEnter height:__\b\b";
	cin >> b.height;
	cout << "\nEnter width:__\b\b";
	cin >> b.width;
	cout << "\nEnter length:__\b\b";
	cin >> b.length;
	calc_vol(&b);
	cout << endl << endl;
	show(b);
}
