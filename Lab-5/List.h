#pragma once
template <typename T>
class List
{
protected:
    T* arr;
    int maxSize;
    int currentSize;
public:
    List(int size){
        maxSize = size;
        arr = new T[maxSize];
        currentSize = 0;
    }
    List(const List& object){
        this->maxSize = object.maxSize;
        arr = new T[maxSize];
        for (int i = 0; i < object.currentSize; i++)
        {
            *(arr + i) = *(object.arr + i);
        }
        currentSize++;
    }
    virtual void addElement(T) = 0;
    virtual T removeElement() = 0;
    ~List(){
        maxSize = 0;
        delete[] arr;
        currentSize = 0;
    }
};
