#pragma once
template <class T>
class List
{
protected:
	T* arr;
	int maxSize;
	int currentSize;
public:
	List(int size)
	{
		maxSize = size;
		currentSize = 0;
		arr = new T[maxSize];
	}
	List(const List &obj)
	{
		maxSize = obj.maxSize;
		currentSize = obj.currentSize;
		T* temp = new T[obj.maxSize];
		for (int i = 0; i < obj.currentSize; i++)
		{
			*(temp + i) = *(obj.arr + i);
		}
		arr = temp;
	}
	int getCurrentSize() const
	{
		return currentSize;
	}
	int getMaxSize()
	{
		return maxSize;
	}
	virtual void addElement(T value) = 0;
	virtual T removeElement() = 0;
	~List() 
	{
		maxSize = 0;
		currentSize = 0;
		delete[] arr;
	}
};

