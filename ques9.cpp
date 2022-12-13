#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

class Queue
{
public:
    Node *cursor;

    // constructor
    Queue()
    {
        this->cursor = NULL;
    }

    // enqueue
    void enqueue(int element)
    {
        Node *temp = new Node();
        temp->value = element;

        if (cursor == NULL)
        {
            cursor = temp;
            temp->next = temp;
        }
        else
        {
            temp->next = cursor->next;
            cursor->next = temp;
            cursor = temp;
        }
    }

    // dequeue
    void dequeue()
    {
        if (cursor == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else if (cursor->next == cursor)
        {
            cursor = NULL;
        }
        else
        {
            cursor->next = cursor->next->next;
        }
    }

    // display
    void display()
    {
        if (cursor == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            Node *temp;
            temp = cursor->next;
            cout << temp->value << " - ";
            while (temp != cursor)
            {
                temp = temp->next;
                cout << temp->value << " - ";
            }
            cout << endl;
        }
    }

    // empty
    bool empty()
    {
        if (cursor == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Queue q1;
    q1.enqueue(34);
    q1.enqueue(143);

    q1.display();

    q1.dequeue();
    q1.display();

    q1.dequeue();
    q1.dequeue();

    q1.display();

    cout << q1.empty() << endl;

    return 0;
}