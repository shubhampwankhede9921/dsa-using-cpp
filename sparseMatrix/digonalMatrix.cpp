#include<iostream>
using namespace std;

void set(int a[],int i,int j,int x)
 {
    if(i==j)
    {
        a[i-1]=x;
    }
}
int get(int a[],int i,int j)
{
    if(i==j)
    {
        return a[i-1];
    }
    else {
        return 0;
    }
}
void display(int a[],int i,int j)
{
    for(int m=0;m<i;m++)
    {
        for(int n=0;n<j;n++)
        {
            if(m==n)
            {
                cout<<a[n]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int m,n,ch;
    cout<<"Enter the the size of diagonal matrix";
    cin>>m>>n;
    int *arr=new int [m];

    cout<<"Enter the elements of the digonal";
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    do{
        cout<<"1)display the diagonal matrix"<<endl;
        cout<<"2)set the value"<<endl;
        cout<<"3)get the value"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:
              display(arr,5,5);
              break;
            case 2:
               int x;
               cout<<"enter the i,j,element :";
               cin>>m>>n>>x;
               set(arr,m,n,x);
               break;
            case 3:
                cout<<"Enter the i and j of element";
                cin>>m>>n;
                cout<<get(arr,m,n)<<endl;
                break;
            default:
                cout<<"invalid choice";

             
        }
    }while(1);


}