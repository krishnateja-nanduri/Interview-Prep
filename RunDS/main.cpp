/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Teja
 *
 * Created on March 7, 2016, 12:33 PM
 */
#include<iostream>
#include <cstdlib>
#include "../DataStructures/StackOp.cpp"
using namespace std;

int main()
{
    int choice,v;
    Stack st;
    while(1)
    {  
        cout<<endl<<"1.Push element"<<endl;
        cout<<"2.Pop element"<<endl;
        cout<<"3.Display stack"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<endl<<"Enter the value to be popped into the stack"<<endl;
                cin>>v;
                st.push(v);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.display();
                break;
            case 4:
                exit(0);
        }
    }
    return (0);
}

