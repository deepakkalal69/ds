#include<iostream>
using namespace std;
#define n 100
class Stack{
    public:
    int*arr;
    int top;
    Stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow";
        }
        else{
            top++;
            arr[top]=x;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"No element";
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No element";
            return -1;
        }
        cout<<arr[top];
    }
    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Stack Stk;
    Stk.push(3);
    Stk.push(2);
    Stk.push(4);
    Stk.pop();
    Stk.Top();
}

