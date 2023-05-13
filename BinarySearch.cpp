#include<iostream>
using namespace std;

int bisar(int arr[],int key,int n);

int main()
{
    int n;
    cout<<"Enter the Size of Array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter Key";
    cin>>key;
    cout<<"The key word "<<key<<" is on "<<bisar(arr,key,n)<<" Position";

 return 0;   
}
int bisar(int arr[],int key,int n)
{
    int s=0;
    int l=n;
    while(s<=l){
        int mid=(s+l)/2;

        if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            l=mid-1;
        }
        else if(arr[mid]==key){
            return mid+1;
        }    
        
    }
    return -1;
}