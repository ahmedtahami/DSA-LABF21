#include<iostream>
#include"Queue.h"
#include"List.h"
using namespace std;

int main()
{
    Queue<int> queue(12);
    queue.enqueue(8);
    queue.enqueue(55);
    queue.enqueue(58);
    queue.enqueue(34);
    queue.enqueue(14);
    queue.display();
    int temp = queue.dequeue();
    cout << temp << endl;
    queue.display();
    queue.enqueue(11);
    queue.enqueue(22);
    queue.enqueue(23);
    queue.enqueue(5);
    queue.display();
    return 0;
}
