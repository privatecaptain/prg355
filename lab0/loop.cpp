#include <iostream>

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
		for (int j = 0; j < columns; ++j)
		{
			cout << '#';
		}
		cout << endl;
	}


}