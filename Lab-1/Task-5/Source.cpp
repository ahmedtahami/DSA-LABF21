#include<iostream>
#include"Calculator.h"
using namespace std;
int main()
{
	Calculator<double> C(2.1, 663.4);
	float res = C.Add();
	cout << res;

	Calculator<int> C(12, 0);
	float res = C.Divide(); // It will give an error message an excution will be terminated.
	cout << res;
	return 0;
}
