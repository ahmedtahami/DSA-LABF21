#pragma once
#include"List.h"
#include<iostream>
using namespace std;
template <class T>
class MyList : public List<T>
{
public:
	MyList(int size) : List<T>(size)
	{

	}
	MyList(const MyList& obj) : List<T>(obj)
	{

	}
	void addElement(T value)
	{
		List<T>::arr[List<T>::currentSize] = value;
		List<T>::currentSize++;
	}
	T removeElement()
	{
		List<T>::currentSize--;
		return List<T>::arr[List<T>::currentSize];
	}
	T& operator[](int index)
	{
		if (index >= List<T>::currentSize) 
		{ 
	        cout << "Array index out of bound, exiting"; 
	        exit(0); 
    	}
    	return List<T>::arr[index];
	}
	bool empty()
	{
		if(List<T>::currentSize == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool full()
	{
		if(List<T>::currentSize == List<T>::maxSize)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	~MyList()
	{
		
	}
};

