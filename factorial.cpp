#include<iostream>

using namespace std;

int factorial(int n1);
int main()
{
    int n1;
    cout<<"Enter a Numbers : ";
    cin>>n1;
    cout<<"Factorial of "<<n1<<" is "<<factorial(n1);
   
return 0;
}

int factorial(int n1)
{
    int fact=1;
    for(int i=2;i<=n1;i++)
    fact*=i;
    return fact;

}