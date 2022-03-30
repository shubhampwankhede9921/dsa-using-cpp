#include<iostream>
using namespace std;

// this fun make ur string as lowecase
string makeLowerCase(string a) 
{
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=91)
        {
            a[i]=a[i]+32;
        }
    }
    return a;
}

// this function make ur fun as uppercase
string makeUpperCase(string a)
{
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    return a;
}

// this fun will count vowels and consonents in the string
void countingVowelsConsonents(string a)
{
    int vowels=0,consonents=0;
    for(int i=0; a[i]!='\0'; i++)
    {
       
        if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u')
        {
            vowels++;
        }
        else if((a[i]>=65 && a[i]<=91) || (a[i]>=97 && a[i]<=120))
        {
            consonents++;
        }

    }
    cout<<"vowels: "<<vowels<< endl<<"consonents: "<< consonents;
}

// this fun find length of ur string
int length(string a)
{ 
    int i;
    for(i=0; a[i]!='\0'; i++)
    {
        
    }
    
    return i;
}

// this fun will count words in the senstance
int countingWords(string a)
{
    int word=0;
    char last;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ' && last!=' ')
        {
           
            word++;
            
        }
         last=a[i];
    }
    return word+1;
}

// this function will validate string
int validateString(string a)
{
    
    for(int i=0;a[i]!='\0';i++)
    {
        if(!(a[i]>=65 && a[i]<=91) && !(a[i]>=97 && a[i]<=120) && !(a[i]>=47 && a[i]<=57))
        {
            return 0;
        }

    }
    return 1;
}

// this function will reverese string
string reverse(string a)
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {

    }
    int j=i-1;
    for(i=0;i<j;i++,j--)
    {
        swap(a[i],a[j]);
    }
    return a;
}

// this fun tell that string is equle or not and also which string is better 
void compare(string a,string b)
{
    int i,j;
    for(i=0,j=0; a[i]!='\0'&& b[j]!='\0'; i++,j++)
    {
        if(a[i]!=b[j])
        {
            break;
        }
    }
    if(a[i]==b[j]){cout<<"string are equle";}
    else if(a[i] <b[j]){cout<<"second string is greter";}
    else if(a[i]>b[j]){cout<<"first string is greater";}

}

// this is the main function 
int main()
{
    string n="painter",m="painting";
    // cout<<"Enter your string :";
    // cin>>n;
    // cout<<n;
    compare(m,n);

}