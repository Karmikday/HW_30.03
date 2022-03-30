#include <iostream>
#include <time.h>
using namespace std;

void MinMax(int arr[],const int size = 10 )
{
	srand(time(0));
	
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
	for (size_t i = 0; i < size; i++)
	{
		cout << i + 1 << " = " << arr[i] << "\n";
	}
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "max is: " << max<< " " << "min is: " << min;
}