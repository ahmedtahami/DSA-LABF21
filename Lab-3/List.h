#pragma once
template<class T>
class List{
protected:
    T* arr;
    int maxSize;
    int currentSize;
    void regrow()
    {
        T* temp = new T[maxSize];
        for (int i = 0; i < maxSize; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        maxSize = maxSize + 1;
        arr = new T[maxSize];
        for (int i = 0; i < maxSize; i++)
        {
            arr[i] = temp[i];
        }           
    }
public:
    List(int size)
    {
        maxSize = size;
        arr = new T[maxSize];
    }
    // List(const T& object)
    // {
    //     maxSize = object.maxSize;
    //     currentSize = object.currentSize;
    //     for (int i = 0; i < object.currentSize; i++)
    //     {
    //         *(arr + i) = *(object.arr + i);
    //         currentSize++;
    //     }
    // }
    virtual void addElement(T) = 0;
    virtual void removeElement() = 0;
    ~List()
    {
        delete[] arr;
        currentSize = 0;
        maxSize = 0;
    }

};