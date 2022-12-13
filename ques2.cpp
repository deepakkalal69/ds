#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int first=0;
    int last=n-1;
    int mid=(first+last)/2;
    while(first<=last){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            last=mid-1;            
        }
        else{
            first=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cout<<"Enter the key to be searched: ";
    cin>>key;
    cout<<"key is found at index: "<<BinarySearch(arr,n,key);    
}
