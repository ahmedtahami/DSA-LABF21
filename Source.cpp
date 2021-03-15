#include<iostream>
#include"MyList.h"
using namespace std;
template<class T>
void showList(MyList<T> list)
{
	cout << "List : ";
	for(int i = 0; i < list.getCurrentSize(); i++)
	{
		if(i == list.getCurrentSize() - 1)
		{
			cout << list[i];
		}
		else
		{
			cout << list[i] << ", ";
		}
	}
	cout << endl;
}
int main()
{
	MyList<int> myList(10);
	myList.addElement(15);
	myList.addElement(25);
	myList.addElement(35);
	myList.addElement(45);
	showList<int>(myList);
	
	if(myList.full())
	{
		cout << "List is Full!\n";
	}
	if(!myList.full())
	{
		cout << "List is not Full!\n";
	}
	
	MyList<int> myList1(myList);
	
	myList.removeElement(); // REMOVING ELEMENT FROM myList
	cout << "Remove element from List!\n";
	
	showList<int>(myList);
	cout << "Using Copy Constructor...!\n";
	showList<int>(myList1);	
	
	MyList<float> floatingList(1); // THIS LIST IS EMPTY
	if(floatingList.empty())
	{
		cout << "List is Empty!\n";
	}
	
	return 0;
}
