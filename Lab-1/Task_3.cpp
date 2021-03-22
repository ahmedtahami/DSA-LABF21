#include<iostream>
int main()
{
	int value = 8;
	const int n = 10;
	int array[n] = { 8,0,9,4,5,7,1,6,2,3 };
	int low = 0, high = n - 1, mid = 0;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return mid;
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
	
}
