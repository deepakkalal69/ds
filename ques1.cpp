#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++)
    if(arr[i]==key){
        return i;
    }
    return -1;    
}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cout<<"Enter key to be searched: ";
    cin>>key;
    cout<<"the key is found at index: "<<LinearSearch(arr,n,key);
}