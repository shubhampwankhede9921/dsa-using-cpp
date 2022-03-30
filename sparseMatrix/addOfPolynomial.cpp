#include<iostream>
using namespace std;
struct term
{
   public:
    int coeff;
    int expo;
};
class polynomial
{
  public:
    int n;
    struct term *t;
  public:
    // polynomial()
    // {
    // }
    // polynomial(int m)
    // {
    //     n=m;
    // }
    void setTerm()
    {
        cout<<"enter no. of terms in the poly";
        cin>>n;
        t=new term[n];
        for(int i=0;i<n;i++)
        {
            cout<<"Enter the coff and expo of the "<<i+1<<"term";
            cin>>t[i].coeff>>t[i].expo;
        }
    }
    void add(polynomial &p1,polynomial &p2)
    { 
        int i=0,j=0,k=0;
        while(i<p1.n && j<p2.n)
        {
            if(p1.t[i].expo > p2.t[j].expo)
            {
                t[k++]=p1.t[i++];
            }
            else if(p1.t[i].expo < p2.t[j].expo)
            {
                t[k++]=p2.t[j++];
            }
            else{
                t[k].expo=p1.t[i].expo;
                t[k].coeff=p1.t[i].coeff+p2.t[j].coeff;
                k++;
                i++;
                j++;
            }
        }
       
    }
    void display()
    {
        for(int i=0;i<n;i++)
        {
            cout<<t[i].coeff<<"X"<<t[i].expo<<"+";
        }
    }
};
int main()
{
    polynomial p1,p2;
    p1.n=2;
    p1.t[0].coeff=5;
    p1.t[0].expo=2;
    p1.t[1].coeff=5;
    p1.t[1].expo=1;

    p2.n=2;
    p2.t[0].coeff=5;
    p2.t[0].expo=2;
    p2.t[1].coeff=5;
    p2.t[1].expo=2;

    polynomial p3((p1.n+p2.n));
    p3.add(p1,p2);
    cout<<p3.n;
    p3.display();
}