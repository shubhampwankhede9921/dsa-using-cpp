#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,5,6,7};
    int sum=0,s;
    s=7*(7+1)/2;
    for(int i=0;i<6;i++)
    {
        sum=sum+a[i];
    }
    cout<<"missing element is :"<<s-sum;

}