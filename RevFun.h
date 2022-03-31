#include <iostream>
#include <time.h>
using namespace std;

void ShowArray(int arr[],const int size = 10)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20 + 1;
		cout << "[" << i + 1 << "]" << arr[i] << endl;
	}
cout << "============================================" << endl;
}
void ChangedArray(int arr[],const int size=10)
{
	int a = arr[0];
	for (int i = 0; i < size/2; i++)
	{
		a =arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = a;
	}
	for (int i = 0; i < size; i++)
	{
		cout << "[" << i + 1 << "]" << arr[i] << endl;
	}

}