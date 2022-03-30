#include<iostream>
using namespace std;
int fibr(int n)  //fib using recursion//
{
    if(n<=1)
    {
     return n;
    }
    else
    {
      return fibr(n-2)+fibr(n-1);
      
    }
     
}

void fibi(int n)
{
    int a=0,b=1,s;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<=n;i++)
    {
        s=a+b;
        cout<<s<<" ";
        a=b;
        b=s;
    }
}

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    fibi(n);
}