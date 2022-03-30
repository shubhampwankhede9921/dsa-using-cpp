#include<iostream>
using namespace std;
int main()
{
   int a[10]={1,2,4,6},b[10]={1,6,7,8,9},c[10];
   int i=0,j=0,k=0;
   while(i<4 && j<5)
   {
       if(a[i]<b[j])
       {
           c[k]=a[i];
           i++;
           k++;
       }
       else{
           c[k]=b[j];
           k++;
           j++;
       }
   }
   for(;i<4;i++)
   {
      c[k]=a[i];
      k++;
   }
   for(;j<5;j++)
   {
       c[k]=b[j];
       k++;
   }
 for(int i=0;i<9;i++)
 {
     cout<<c[i]<<' ';
 }
   

}