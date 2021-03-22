#include<iostream>
using namespace std;

void mySwap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	const int n = 10;
	int array[n] = { 8,0,9,4,5,7,1,6,2,3 };
	int smallSub = 0;
	for (int i = 0; i < n - 1; i++)
	{
		smallSub = i;
		for (int j = i + 1; j < n; j++)
		{
			if (array[j] < array[smallSub])
			{
				smallSub = j;
			}
		}
		swap(array[i], array[smallSub]);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}
	return 0;
}
