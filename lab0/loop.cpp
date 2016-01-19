/*
Harpreet Boparai
Student ID : 012 0145 159
*/





#include <iostream>
#include "iomanip"
using namespace std;

int main(void){
	
	int rows,columns;
	char patt = '#';


	cout << "Enter no. of rows: ";
	cin >> rows;
	cout << endl;

	cout << "Enter no. of columns : ";
	cin >> columns;
	cout << endl;

	for (int i = 0; i < rows; ++i)
	{
		cout << setw(columns)
			 << setfill('#')
			 << '#';
 		cout << endl;
	}


}