#include<iostream>
using namespace std;

int fact(int x);

int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int a;
            a=fact(i)/(fact(j)*fact(i-j));
            cout<<a<<" ";
        }
        cout<<endl;
    }

 return 0;
}

int fact(int x)
{
    int fact=1;
    for(int i=2;i<=x;i++)
    {
        fact*=i;
    }
 return fact;
}
