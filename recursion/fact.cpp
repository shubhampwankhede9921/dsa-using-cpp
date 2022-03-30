#include<iostream>
using namespace std;
int fun(int n)

{
    if (n==0)
    {
      return(1);
    }
    else{
        return(n*fun(n-1));
    }
     
}
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<fun(n);
    return(0);
}
