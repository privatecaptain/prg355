#include "iostream"
#include "iomanip"

using namespace std;


struct Time
{
	int hrs,mins,secs;
};

void Display(Time t);
void Normalize(Time* t);

int main(int argc, char const *argv[])
{
	
	Time t1 = {25,63,70};
	cout << "Time is ";
	Display(t1);
	Normalize(&t1);
	cout << "Normalize time is.. " ;
	Display(t1);
	return 0;
}


void Display(Time t){
	cout.width(2);
	cout.fill('0');
	cout << t.hrs  << ":"
		 << t.mins << ":"
		 << t.secs << endl;

}

void Normalize(Time* t){

	
	t->mins += t->secs/60;
	t->secs %= 60;

	t->hrs += t->mins/60;
	t->mins %= 60;	

	t->hrs %= 24;
	
}












