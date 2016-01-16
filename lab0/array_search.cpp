#include "iostream"

using namespace std;

int FindFirst(int arr[], int N, int target);
int Count(int arr[], int N, int target);

int main(int argc, char const *argv[])
{
	int arr[10] = {3, 4, 5, 1, 2, 4, 5, 7, 6, 4};
	const int N = 10; /* number of cells in array */
	int target;

	cout << "Enter a search value: ";
	cin >> target;

	int where, howMany;
	where = FindFirst(arr, N, target);
	howMany = Count(arr, N, target);

	cout << "First index at " << where << " and " << howMany << " occurences" << endl;

	return 0;
}


int Count(int arr[],int N ,int target){

	int count = 0;

	for (int i = 0; i < N; ++i)
	{
		if (arr[i] == target)
		{
			count ++;
		}
	}

	return count;
}


int FindFirst(int arr[],int  N,int target){

	int index;

	for (int i = 0; i < N; ++i)
	{
		if (arr[i] == target)
		{
			return i;
		}
	}

	return -1;

}
















