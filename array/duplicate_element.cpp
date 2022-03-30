#include <iostream>
using namespace std;
int main()
{
    int a[10], n;
    cout << "Enter the length of an array:";
    cin >> n;
    cout << "Enter an element of an array";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int last = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1] && a[i] != last)
        {
            cout << a[i];
            last = a[i];
        }
    }
}