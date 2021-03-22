#include<iostream>
using namespace std;

void mySwap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
template<typename t>
void FunSwap(t& x, t& y)
{
	t temp = x;
	x = y;
	y = temp;
}
int main()
{

	int a = 34;
	int b = 22;
	mySwap(a, b);
	cout << "Value of a : " << a << endl << "Value of b : " << b << endl;

	int x = 2;
	int y = 1;
	FunSwap(x, y);
	cout << "Value of x : " << x << endl << "Value of y : " << y << endl;
	float p = 12.3f;
	float q = 3.14f;
	FunSwap(p, q);
	cout << "Value of p : " << p << endl << "Value of q : " << q << endl;

	return 0;
}
