#include <iostream>
#include <cstring>

using namespace std;

typedef struct student
{
  	int roll_no;
  	char name[30];
  	int phone_number;
}st;

int main(){
	st p1, p2, p3;
	p1.roll_no = 1;
	strcpy(p1.name,"Brown");
  	p1.phone_number = 123443;
  	p2.roll_no = 2;
  	strcpy(p2.name,"Sam");
  	p2.phone_number = 1234567822;
  	p3.roll_no = 3;
  	strcpy(p3.name,"Addy");
  	p3.phone_number = 1234567844;
  	cout << "First Student" << endl;
  	cout << "roll no : " << p1.roll_no << endl;
  	cout << "name : " << p1.name << endl;
  	cout << "phone no : " << p1.phone_number << endl;
  	cout << "Second Student" << endl;
  	cout << "roll no : " << p2.roll_no << endl;
  	cout << "name : " << p2.name << endl;
  	cout << "phone no : " << p2.phone_number << endl;
  	cout << "Third Student" << endl;
  	cout << "roll no : " << p3.roll_no << endl;
  	cout << "name : " << p3.name << endl;
  	cout << "phone no : " << p3.phone_number << endl;
	return 0;
}