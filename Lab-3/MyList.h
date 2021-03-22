#pragma once
#include"List.h"
#include<iostream>
using namespace std;
template <class T>
class MyList : public List<T>
{
public:
    MyList(int arrySize) : List<T>(arrySize)
    {

    }
    void addElement(T element)
    {
        if(full())
        {
            List<T>::regrow();
            List<T>::arr[List<T>::currentSize++] = element;
        }
        else
        {
            List<T>::arr[List<T>::currentSize++] = element;
        }
    }
    void removeElement() // removes last element of the list 
    {
        List<T>::currentSize--;
    }
    bool empty()
    {
        if (List<T>::currentSize > 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    bool full()
    {
        if (List<T>::currentSize == List<T>::maxSize)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int size()
    {
        return List<T>::currentSize;
    }
    T last()
    {
        return List<T>::arr[List<T>::currentSize];
    }
    void display()
    {
        for (int i = 0; i < List<T>::currentSize; i++)
            if (i == List<T>::currentSize - 1)
            {
                cout << List<T>::arr[i] << " At index " << i << endl;
            }
            else
            {
                cout << List<T>::arr[i] << " At index " << i  << ", ";
            }
    }
    void insertAtStart(T element)
    {
        if(full())
        {
            List<T>::regrow();
            for (int i = size() - 1; i >= 1; i--)
            {
                List<T>::arr[i] = List<T>::arr[i - 1];
            }
            List<T>::arr[0] = element;   
            List<T>::currentSize++;
        }
        else
        {
            for (int i = size() - 1; i >= 1; i--)
            {
                List<T>::arr[i] = List<T>::arr[i - 1];
            }
            List<T>::arr[0] = element;   
            List<T>::currentSize++;
        }
    }
    void insertAtEnd(T element)
    {
        if (full())
        {
            List<T>::regrow();
            List<T>::arr[List<T>::currentSize++] = element;
        }
        else
        {
           List<T>::arr[List<T>::currentSize++] = element;
            
        }
    }
    void removeFromStart(T element)
    {
    	
	}
    void removeFromEnd(T element)
    {
        currentSize--;
    }
};
