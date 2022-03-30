#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of an array";
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,h=n-1;
    while(l<h)
    {
        while(a[l]<0)
        {
            l++;
        }
        while(a[h]>=0)
        {
            h--;
        }
        if(l<h)
        {
            swap(a[l],a[h]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}