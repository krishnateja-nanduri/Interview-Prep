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
#include "../DataStructures/MyLLOps.cpp"
using namespace std;

int main(){
    int choice;
    Linked Linked;
    while(1){
        int val;
        cout<<"\n1. Add at front"<<endl;
        cout<<"2. Add at Back"<<endl;
        cout<<"3. Add at Position"<<endl;
        cout<<"4. Delete at Position"<<endl;
        cout<<"5. Change at position"<<endl;
        cout<<"6. Display"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Enter the option: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"\nEnter data to Insert: ";
                cin>>val;
                Linked.add_at_front(val);
                break;
            case 2:
                cout<<"Enter data to Insert: ";
                cin>>val;
                Linked.add_at_back(val);
                break;
            case 3:
                Linked.add_at_position();
                break;
            case 4:
                Linked.delete_at_position();
                break;
            case 5:
                Linked.change_at_position();
                break;
            case 6:
                Linked.display();
                break;
            case 7:
                exit(0);
                break;
        }
    }
    return 0;
}

