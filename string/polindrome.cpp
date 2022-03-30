#include<iostream>
using namespace std;
int checkForPolindrome(string a)
{
     int i;
    for(i=0;a[i]!='\0';i++)
    {

    }
    int j=i-1;
    for(i=0;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string n;
    cout<<"Enter the string :";
    cin>>n;
    if(checkForPolindrome(n))
    {
        cout<<"string is polindrome.";
    }
    else{
        cout<<"string is not polindrome.";
    }
   
}