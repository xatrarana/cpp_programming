#include <iostream>
#include <cstring>

using namespace std;

union student
{
	int roll_no;
	int phone_number;
	char name[30];
};

int main()
{
	union student p1;
	p1.roll_no = 1;
	cout << "roll_no : " << p1.roll_no << endl;
	strcpy(p1.name,"Brown");
	cout << "name : " << p1.name << endl;
	p1.phone_number = 1234567822;
	cout << "phone_number : " << p1.phone_number << endl;
	return 0;
}