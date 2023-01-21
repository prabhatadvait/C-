#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
public:
    void setId(void){
        cout<<"Enter the id of the employee "<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"The id of the employee is "<<id<<endl;
    }
};

int main(){
    // Employee prabhat,roshan,utkarsh,sahil,sudhakar;
    // prabhat.setData();
    // prabhat.getData();

    // Arrays of object
    Employee amazon[5]; // here  5 is denoting  five  employee and  there is no need of object 
    for (int i=0; i<5; i++){
        amazon[i].setId();
        amazon[i].getId();
    }

    return 0;
}