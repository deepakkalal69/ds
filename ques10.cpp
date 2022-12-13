#include <iostream>
using namespace std;
class node{
    private:
    int data;
    node* next;
    public:
    node(int val){
        data=val;
        node* next=NULL;
    }
    friend class queue;
};
class queue{
    public:
    node* front;
    node* back;
    queue(){
        front=NULL;
        back=NULL;

    }
    void enqueue(int x){
        node *n= new node(x);
        if(front==NULL){
            front=n;
            back=n;
            return;

        }
        back=back->next;
        back=n;
    }
    void dequeue(){
        if(front==NULL){
            cout<<"No element"<<endl;
            return;
        }
        node* todelete=front;
        front=front->next;
        delete todelete;
    }
    int peek(){
        if(front==NULL){
            cout<<"No element"<<endl;
        }
        cout<<front->data;

    }
    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.peek();
    
}
