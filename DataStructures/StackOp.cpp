/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include<iostream>
using namespace std;

class Stack
{
    int stack[10], top;
public:
    Stack()
    {
        top = -1;
    }
    void push(int);
    void pop();
    void display();

};

void Stack::push(int val)
{
    if(top > 9)
    {
        cout<<"Stack is full"<<endl;
        return;
    }
    stack[++top]=val;
    cout<<val<<" has been popped in";
}

void Stack::pop()
{
    if(top < 0)
    {
        cout<<"Stack is empty. No elements to pop"<<endl;
        return;
    }
    cout<<"The value "<<stack[--top]<<" has been popped out"<<endl;
}

void Stack::display()
{
    if(top < 0)
    {
        cout<<" No elements to display. Stack is empty"<<endl;
        return;
    }
    for(int i = top; i >= 0; i--)
    {
        cout<<stack[i]<<endl;
    }
}
