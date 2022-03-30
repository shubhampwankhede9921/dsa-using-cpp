#include <iostream>
using namespace std;
class Array

{
private:
    int *A;
    int size;
    int length;

public:
    Array()
    {
        size = 10;
        length = 0;
        A = new int[size];
    }
    Array(int sz, int len)
    {
        size = sz;
        length = len;
        A = new int[size];
    }
    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
    }
    void add()
    {
        cout << "Enter the array an elements :";
        for (int i = 0; i < length; i++)
        {
            cin >> A[i];
        }
        cout << "your array is :" << endl;
        display();
    }
    void insert(int index, int element)
    {
        for (int i = length; i > index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = element;
        length++;
        cout << element << "is added at" << index << "position successfully.";
    }
    void remove(int index)
    {
        cout << A[index] << "is remove at" << index << "position successfully.";
        for (int i = index; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
    }
    int search(int element)
    {
        for (int i = 0; i < length; i++)
        {
            if (A[i] == element)
            {
                return i;
            }
        }
        return -1;
    }
    void max_min()
    {
        int max = A[0];
        int min = A[0];
        for (int i = 0; i < length; i++)
        {
            if (A[i] > max)
            {
                max = A[i];
            }
            else if (A[i] < min)
            {
                min = A[i];
            }
        }
        cout << "max element is =" << max << endl
             << "min element is =" << min << endl;
    }
    void reverse()
    {

        for (int i = 0, j = length - 1; i < j; i++, j--)
        {
            swap(A[i], A[j]);
        }
        cout << "array is :";
        display();
    }
    int searchb(int element)
    {
        int l = 0, h = length, mid = l + h / 2;
        while (l <= h)
        {
            if (A[mid] == element)
            {
                return (mid);
            }
            else if (element < A[mid])
            {
                h = mid - 1;
            }
            else if (element > mid)
            {
                l = mid + 1;
            }
        }
        return -1;
    }
    int isSorted()
    {
        for(int i=0;i<length-1;i++)
        {
            if(A[i]>A[i+1])
            {
                return 0;
            }

        }
        return 1;
    }
    ~Array()
    {
        delete[] A;
    }
};

int main()
{
    int choice, size, length;
    cout << "Enter the size and length of the element";
    cin >> size >> length;
    Array a(size, length);

    do
    {

        cout << endl
             << "--------------------**** menu ****--------------------------" << endl;
        cout << "1.create an array." << endl;
        cout << "2.Display an array." << endl;
        cout << "3.insert an element." << endl;
        cout << "4.remove an element." << endl;
        cout << "5.search an element." << endl;
        cout << "6.search an element through binary method." << endl;
        cout << "7.max from an array." << endl;
        cout << "8.reverse an element." << endl;
        cout << "9.array is sorted or not" << endl;
        cout << "10.Exit" << endl
             << endl;
        cout << "Enter choice: " << endl;
        cin >> choice;

        switch (choice)
        {
        case (1):
            a.add();
            break;

        case (2):
            a.display();
            break;

        case (3):
            int index, element;
            cout << "Enter an index and element";
            cin >> index >> element;
            a.insert(index, element);
            break;

        case (4):
            cout << "Enter an index";
            cin >> index;
            a.remove(index);
            break;

        case (5):
            cout << "Enter the elment to be search";
            cin >> element;
            if (a.search(element) == -1)
                cout << "Element Not found at index";
            else
                cout << "Element found at index" << a.search(element);
            break;
        case (6):
            cout << "Enter the elment to be search";
            cin >> element;
            if (a.searchb(element) == -1)
                cout << "Element Not found at index";
            else
                cout << "Element found at index" << a.searchb(element);
            break;
        case (7):
            a.max_min();
            break;
        case (8):
            a.reverse();
            break;

        case(9):
           if( a.isSorted())
              cout<<"array is sorted";
           else
              cout<<"array is not sorted.";

        default:
            cout << "invalid choice ";
        }

    } while (choice < 10);
}