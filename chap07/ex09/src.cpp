#include <iostream>
#include <cstring>

using namespace std;

const int SLEN = 30;

struct student{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size:";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student *ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}

int getinfo(student * st, int i)
{
	using namespace std;
	int counter = 0;
	char temp[SLEN];
	while (counter < i)
	{
		cout << "Enter name of student #" << counter + 1 <<":";
		cin.getline(temp, SLEN);
		if (strlen(temp) == 0)
			break;
		strncpy(st[counter].fullname, temp, SLEN);
		cout << "\nEnter hobby:";
		cin.getline(temp, SLEN);
		strncpy(st[counter].hobby, temp, SLEN);
		cout << "\nEnter ooplevel:";
		while (!(cin >> st[counter].ooplevel))
		{
			cout << "\nInvalid input. Try again.\n";
			cin.clear();
		}
			while (cin.get() != '\n')
				continue;
		counter++;
	}
	return counter;
}

void display1(student st)
{
	using namespace std;
	cout << "\n\nStudent fullname:" << st.fullname <<".\n";
	cout << "Student hobby:" << st.hobby << ".\n";
	cout << "Student OOP level:" << st.ooplevel << ".\n";
}

void display2(const student *ps)
{	
	using namespace std;
	cout << "\n\nStudent fullname:" << ps->fullname <<".\n";
	cout << "Student hobby:" << ps->hobby << ".\n";
	cout << "Student OOP level:" << ps->ooplevel << ".\n";
}

void display3(const student pa[], int n)
{	
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		cout << "\n\nStudent fullname:" << pa[i].fullname <<".\n";
		cout << "Student hobby:" << pa[i].hobby << ".\n";
		cout << "Student OOP level:" << pa[i].ooplevel << ".\n";
	}
}
