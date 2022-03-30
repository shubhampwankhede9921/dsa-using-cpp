#include<iostream>
using namespace std;
void perm(string s,int k)
{
   static int a[10]={0};
   static string res;
   int i;
   if(s[k]=='\0')
   {
       res[k]='\0';
       for(int j=0;res[j]!='\0';j++)
       {
           cout<<res[j];
       }
       cout<<" ";
   }
   else{
       for(i=0;s[i]!='\0';i++)
       {
           if(a[i]==0)
           {
               res[k]=s[i];
               a[i]=1;
               perm(s,k+1);
               a[i]=0;
           }
       }
   }
}
int main()
{
    string s;
    cout<<"Enter the string :";
    cin>>s;
    perm(s,0);
    return 0;
}