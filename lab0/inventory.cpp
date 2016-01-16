#include "iostream"

using namespace std;


struct Part
{
	char item[20];
	float price;
	int quantity;
};

void Display(Part p);
float Cost(Part* p);
float TotalCost(Part p[],int n);

int main(int argc, char const *argv[])
{
	const int n = 6;
	Part p[n];

	for (int i = 0; i < n; ++i)
	{
		p[i].price = 2;
		p[i].quantity = 3;
	}

	cout << TotalCost(p,n) << endl;

	return 0;
}


void Display(Part p){

	cout << p.item;
	cout << p.price;
	cout << p.quantity;
}

float Cost(Part* p){

	return (p->price) * (p->quantity);

}


float TotalCost(Part p[], int n){

	float total = 0.0;

	for (int i = 0; i < n; ++i)
	{
		total += Cost(&p[i]);
	}

	return total;

}









