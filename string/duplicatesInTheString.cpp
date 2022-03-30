#include<iostream>
using namespace std;
void duplicate(string a)
{
    int H[26]={0};
    for(int i=0;a[i]!='\0';i++)
    {
        H[a[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        if(H[i]>1)
        {
            
            cout<<char(i+97)<<" repreted "<<H[i]<<" times "<<endl;
        }
    }
}
int main()
{
    string n;
    cout<<"enter the string :";
    cin>>n;
    duplicate(n);

}