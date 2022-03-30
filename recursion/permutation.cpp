#include<iostream>
using namespace std;

int fact(int x)
{
    if(x==0)
    {
        return 1;
    }
    else return fact(x-1)*x;
}
int perm(int n,int r)
{
    int t1=fact(n);
    int t2=fact(n-r);
    int t3=fact(r);
    return (t1/(t2*t3));
}
int main()
{
   cout<<perm(5,4);
}