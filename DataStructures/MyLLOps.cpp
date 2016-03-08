/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
C++ Program to Implement Singly Linked List and operations on it
*/

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Linked
{
     node *list;
    public:
        Linked();
        void add_at_front(int);
        void add_at_back(int);
        void add_at_position();
        void delete_at_position();
        void change_at_position();
        void display();
};
Linked::Linked()
{
    list = NULL;
}
void Linked::display()
{
    node *p = new node;
    p = list;
    if(list==NULL)
    {
        cout<<"\nList is Empty\n";
    }
    else
    {
        cout<<"\nThe Elements in the List are:\n";
        while(p!=NULL){
            cout<<p->data<<"->";
            p = p->next;
        }
    }
}
void Linked::add_at_front(int val)
{
    node *p = new node;
    p->data = val;
    p->next = list;
    list = p;
}
void Linked::add_at_back(int val)
{
    node *p = new node;
    node *a = new node;
    a = list;
    p->data = val;
    p->next = NULL;
    if(list == NULL)
    {
        list = p;
    }
    else
    {
        while(a->next!=NULL)
        {
            a = a->next;
        }
        a->next = p;
    }
}
void Linked::add_at_position()
{
 int val, pos, count = 0; 
    cout<<"What is the Value to be added: ";
    cin>>val;
    struct node *tmp, *s, *ptr;
    tmp->data = val;//Assign value to a temp node
    cout<<"Enter the position for node to be added: ";
    cin>>pos;
    s = list;
    /*
     Count how long the list is
     */
    while (s != NULL)
    {
        s = s->next;
        count++;
    }
    if (pos == 1) // if the value is to added at the front
    {
        if (list == NULL)   //Check if list is empty
        {
            list = tmp;
            list->next = NULL;
        }
        else 
        {
            ptr = list;
            list = tmp;
            list->next = ptr;
        }
    }
    else if (pos > 1  && pos <= count)  // Value needs to be added anywhere other than the front
    {
        s = list;
        for (int i = 1; i < pos; i++)
        {
            ptr = s;
            s = s->next;
        }
        ptr->next = tmp;
        tmp->next = s;
    }
    else
    {
        cout<<"Position invalid"<<endl;
    }
}
void Linked::delete_at_position()
{
    int pos, count = 0;
    if (list == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the position of value to be deleted: ";
    cin>>pos;
    struct node *s, *ptr;
    s = list;
    if (pos == 1)
    {
        list = s->next;
    }
    else
    {
        while (s != NULL)
        {
            s = s->next;
            count++;  
        }
        if (pos > 0 && pos <= count)
        {
            s = list;
            for (int i = 1;i < pos;i++)
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next;
        }
        else
        {
            cout<<"Position invalid"<<endl;
        }
    }
}
void Linked::change_at_position()
{
int val, pos;
    if (list == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the position of the node to be updated: ";
    cin>>pos;
    cout<<"Enter the new value: ";
    cin>>val;
    struct node *s;
    s = list;
    if (pos == 1)
    {
        list->data = val; 
    }
    else
    {
        for (int i = 0;i < pos - 1;i++)
        {
            if (s == NULL)
            {
                cout<<"There is no element at "<<pos;
                return;
            }
            s = s->next;
        }
        s->data = val;  
    }
}