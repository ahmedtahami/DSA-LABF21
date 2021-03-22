#include<iostream>
#include"List.h"
#include "MyList.h"
using namespace std;
int main(){
    MyList<int> myList(5);
    myList.addElement(1);
    myList.addElement(2);
    myList.addElement(3);
    myList.addElement(4);
    myList.display();
    myList.insertAtStart(5);
    
	myList.display();
	if(myList.full())
    {
    	cout << "\nfull\n";
	}
    cout << "Ok!";
    return 0;
}
