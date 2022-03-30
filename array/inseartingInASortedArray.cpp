#include<iostream>
using namespace std;

int main()
{
    int x=18;
    int a[10]={1,3,4,5,38,40,45,80};
    int i=7;
    while(a[i]>x)
    {2
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=x;
    for(int i=0;i<9;i++)
    {
        cout<<a[i]<<" ";
    }

}