#include <iostream>
#include <time.h>
using namespace std;
void PrintArr(int arr[],const int size = 10)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 + 2;
		cout << "[" << i + 1<< "]" << arr[i] << endl;
	}
}
void ProstChislo(int arr[],const int size = 10)
{
	int p = 0;
	int d = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 2; j <= size / 2; j++)
		{
			if (arr[i] % j == 0 && arr[i] != j)
			{
				arr[i] = 0;
				d++;
			}
		}
		if (arr[i] != 0)
		{
			cout << "Prost chisla->" << arr[i] << endl;
		}
	}

}