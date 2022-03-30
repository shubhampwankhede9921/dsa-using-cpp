//Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.

//You have the following three operations permitted on a word:

//Insert a character
//Delete a character
//Replace a character

//Example 1:

//Input: word1 = "horse", word2 = "ros"
///Output: 3
///Explanation:
//horse -> rorse (replace 'h' with 'r')
//rorse -> rose (remove 'r')
//rose -> ros (remove 'e')

#include <iostream>
using namespace std;
void inseart(string &s1, int i, int x)
{
    s1[i] = x;
}
void replace(string &s1, int i, int x)
{
    s1[i] = x;
}
void remove(string &s1, int i, int x)
{
    s1[i] = '\0';
}
int main()
{
    string s1, s2;
    int i;
    cout << "Enter two string :";
    cin >> s1 >> s2;
    for (i = 0; s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
             cout << endl
                 << s1 << "->" << s2 << "(replace '" << s1[i] << "'with '" << s2[i] << "')";
            replace(s1, i, s2[i]);
           
        }
        else if (s1[i] == '\0')
        {
              cout << endl
                 << s1 << "->" << s2 << "(insearted '" << s1[i] << "'inplace of '" << s2[i] << "')";
            inseart(s1, i, s2[i]);
          
        }
    }
    for (; s1[i] != '\0'; i++)
    {
        cout << endl
             << s1 << "->" << s2 << "(removed " << s1[i] << ")";
        remove(s1, i, s1[i]);
        
    }
    cout << endl
         << "Now u r 1st string is second string i.e s1=" << s1;
}
