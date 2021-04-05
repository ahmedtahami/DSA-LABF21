#pragma once
#include <iostream>
using namespace std;

template <class T>
class Stack
{
protected:
	T* arr;
	int maxSize;
	int currentSize;
public:
	Stack(int size)
	{
		arr = new T[size];
		maxSize = size;
		currentSize = 0;
	}

	virtual T pop() = 0;
	virtual void push(T) = 0;
	virtual bool isEmpty() = 0;
	virtual bool isFull() = 0;
	virtual T top() = 0;
};