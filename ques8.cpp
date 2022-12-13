#include <iostream>
using namespace std;

class Queue
{
    int front;
    int rear;
    int size;
    int *arr;
    int capacity;

public:
    // constructor
    Queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        front = rear = size = 0;
    }

    // size
    int sizeQueue()
    {
        return size;
    }

    // check empty
    bool empty()
    {
        return (size == 0);
    }

    // find front element
    int frontElm()
    {
        if (empty())
            throw "Queue is empty";
        else
            return arr[front];
    }

    // enqueue
    void enqueue(int element)
    {
        if (sizeQueue() == capacity)
            throw "Queue is full";
        else
        {
            arr[rear] = element;
            rear = (rear + 1) % capacity;
            size++;
        }
    }

    // dequeue
    void dequeue()
    {
        if (empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else
        {
            front = (front + 1) % capacity;
            size--;
        }
    }

    // display
    void display()
    {
        if (empty())
            cout << "Queue is empty" << endl;
        else
        {
            int m;
            m = front;
            for (int i = 0; i < size; i++)
            {
                cout << arr[m] << " ";
                m = (m + 1) % capacity;
            }
            cout << endl;
        }
    }
};

int main()
{

    Queue q1(5);
    q1.enqueue(14);
    q1.enqueue(432);
    q1.enqueue(99);
    q1.enqueue(235);
    q1.enqueue(5323);

    q1.display();

    q1.dequeue();
    q1.dequeue();

    cout << "Front Element - " << q1.frontElm() << endl;

    q1.dequeue();

    cout << "Size of Queue - " << q1.sizeQueue() << endl;

    q1.dequeue();
    q1.dequeue();
    q1.dequeue();

    return 0;
}