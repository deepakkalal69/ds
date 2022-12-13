#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class Stack
{
public:
    Node *head;
    int size;

    // constructor
    Stack()
    {
        this->head = NULL;
        size = 0;
    }

    // push function
    void insertElm(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;

        // if no element exist
        if (head == NULL)
        {
            head = newNode;
            newNode->next = NULL;
        }
        // if atleast one node exist
        else
        {
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    // find the top element of stack
    void top()
    {
        if (head == NULL)
            cout << "Stack is empty" << endl;
        else
            cout << "Top element - " << head->data << endl;
    }

    // find the stack size
    void stackSize()
    {
        if (head == NULL)
            cout << "Stack is empty" << endl;
        else
            cout << "Stack Size - " << size << endl;
    }

    // pop function
    void pop()
    {
        if (head == NULL)
            cout << "Stack UnderFlow" << endl;
        else
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
        }
    }
};
int main()
{
    Stack *s1 = new Stack();
    s1->insertElm(97);
    s1->insertElm(23);
    s1->insertElm(45);

    s1->stackSize();

    s1->top();

    s1->insertElm(87);
    s1->top();

    s1->pop();

    s1->top();

    return 0;
}