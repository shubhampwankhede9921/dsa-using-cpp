#include<iostream>
using namespace std;
int main()
{
    int a[10],n;
    cout<<"Enter the length of array";
    cin>>n;
    cout<<"Enter the element of the array";
    for(int i=0;i<n;i++)
      {cin>>a[i];}
    int l=a[0],h=a[n-1];
    int diff=l-0;
    for(int i=0;i<n;i++)
    {
        if(a[i]-i!=diff)
        {
            cout<<"missing elemetn is :"<<diff+i;
            break;
        }
    }

}