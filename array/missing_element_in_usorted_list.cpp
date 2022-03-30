#include<iostream>
using namespace std;
int main()
{
    int a[10],n;
    cout<<"Enter the length of an element :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int h[n+1];
    for(int i=0;i<n+2;i++)
    {
        h[i]=0;
    }
    
    for(int i=0;i<n;i++)
    {
        h[a[i]]=h[a[i]]+1;
    }
    for(int i=1;i<n+1;i++)
    {
        if(h[i]==0)
        {
            cout<<"missing element is :"<<i<<" ";
        }
    }

}