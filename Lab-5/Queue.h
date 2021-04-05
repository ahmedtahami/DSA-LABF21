#pragma once
#include"List.h"
#include<iostream>
using namespace std;
template <typename T>
class Queue : public List<T>
{
protected:
    int Front;
    int Rear;
public:
    Queue(int size) : List<T>(size)
    {
        Front = 0;
        Rear = 0;
    }
    Queue(const Queue & object) : List<T>(object)
    {
        this->Front = object.Front;
        this->Rear = object.Rear;
    }
    void enqueue(T value)
	{
        if(full())
        {
            cout << "Queue is full" << endl;
            exit(-1);
        }
		addElement(value);
        Rear++;
	}
    T dequeue()
	{
        if (empty())
        {
            cout << "Queue is empty" << endl;
            exit(-1);
        }
        
		return removeElement();
	}
    T front()
    {
        T temp = List<T>::arr[Front];
        return temp;
    }
    int size()
    {
        return List<T>::currentSize;
    }
    bool empty()
    {
        if (Front == -1)
        {
            return true;
        }
        return false;
    }
    bool full()
    {
        if ((Front == 0 && Rear == List<T>::currentSize - 1) || (Front == Rear + 1)) 
        {
            return true;
        }
        return false;
    }
    void addElement(T value)
    {
        List<T>::arr[Rear % List<T>::maxSize] = value;
		List<T>::currentSize++;
    }
    T removeElement()
    {
        int temp = List<T>::arr[Front % List<T>::maxSize];
		List<T>::currentSize--;
		Front++;
		return temp;
    }
    void display()
	{
		cout << "Max Size: " << List<T>::maxSize << endl;
		cout << "Current Size: " << List<T>::currentSize << endl;
		cout << "Front: " << Front << endl;
		cout << "Rear: " << Rear << endl;

		for (int i = Front; i < Rear; i++)
		{
			cout << i % List<T>::maxSize << ". " << List<T>::arr[i % List<T>::maxSize] << endl;
		}
	}
    ~Queue()
    {
        Front = 0;
        Rear = 0;
    }
};
