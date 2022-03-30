#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;


void create_list()
{
    int n;
    head = 0;

    cout << "enter the length of link list ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        newnode = new struct node;
        cout << "enter the data" << endl;
        cin >> newnode->data;
        newnode->next = 0;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
}
void display()
{
    temp = head;

    cout << "u r link list is-> ";
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
     
    }
}

int count()
{
    int count=0;
    temp=head;
    while(temp!=0)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int sum()
{
    int sum=0;
    temp=head;
    while(temp!=0)
    {
        sum=sum+temp->data;
        temp=temp->next;
    }
    return sum;
}

int max()
{
   temp=head;
   int max=temp->data;
    while(temp!=0)
    {
        if(temp->data>max)
          {
              max=temp->data;
          }
        temp=temp->next;
    }
    return max;

}

int min()
{
   temp=head;
   int min=temp->data;
    while(temp!=0)
    {
        if(temp->data<min)
          {
              min=temp->data;
          }
        temp=temp->next;
    }
    return min;

}


int main()
{
    int m;
    while (1)
    {

        cout << endl
             << "*********************main menu***********************" << endl;
        cout << "(1)Enter (1) for creating the list " << endl;
        cout << "(2)Enter (2) for display the list " << endl;
        cout << "(3)Enter (3) for display the length of list " << endl;
        cout << "(4)Enter (4) for display the sum of element in the list " << endl;
        cout << "(5)Enter (5) for display the max element in list " << endl;
        cout << "(6)Enter (6) for display the min element in the list " << endl;
        cin >> m;
        switch (m)
        {
        case 1:
            create_list();
            display();
            break;

        case 2:
            display();
            break;

        case 3:
            cout << count()<< " ";
            break;

        case 4:
            cout << sum()<< " ";
            break;
        case 5:
            cout << max()<< " ";
            break;

        case 6:
            cout << min()<< " ";
            break;

        default:
            cout << "wrong choice";
            break;
        }
    }
}