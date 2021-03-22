#include<iostream>
int main()
{
	int value = 8;
	const int n = 10;
	int array[n] = { 8,0,9,4,5,7,1,6,2,3 };
	for (int i = 0; i < n - 1; i++)
	{
		if (array[i] == value)
		{
			return array[i];
		}
		else
		{
			return -1;
		}
	}
}
