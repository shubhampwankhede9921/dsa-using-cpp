#include<iostream>
using namespace std;
int pow(int m, int n)
{
    if(n==0)
    {
       return 1;
    }
    else{
             return pow(m,n-1)*m;
    }
}
int main()
{
    int m,n;
    cout<<"Enter the no and its power :"<<endl;
    cin>>m>>n;
    cout<<pow(m,n);

}