#include<iostream>
#include"Student.h"
#include"Calculator.h"
using namespace std;

int main()
{
	
	*char* arr = new char[14]{ "L1F19BSCS0139" };
	Student* sts = new Student[4];
	sts[0].setCgpa(3.12);
	sts[1].setCgpa(3.13);
	sts[2].setCgpa(3.14);
	sts[3].setCgpa(3.15);

	sts[0].setRegNo(arr);
	delete[] arr;
	arr = nullptr;
	arr = new char[14]{ "L1F19BSCS0140" };
	sts[1].setRegNo(arr);
	delete[] arr;
	arr = nullptr;
	arr = new char[14]{ "L1F19BSCS0141" };
	sts[2].setRegNo(arr);
	delete[] arr;
	arr = nullptr;
	arr = new char[14]{ "L1F19BSCS0142" };
	sts[3].setRegNo(arr);

	for (int i = 0; i < 4; i++)
	{
		cout << "Reg# " << sts[i].getRegNo() << endl;
		cout << "CGPA " << sts[i].getCgpa() << endl;
	}

	return 0;
}
