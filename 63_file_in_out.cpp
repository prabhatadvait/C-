#include<iostream>
#include<fstream>

// In order to work with file ,you will have to open it .Primarly,there are 2 ways to 
//  open  it.  ?
//  1.Using the constructor;
//  2.Using the member function open() of the class 

using namespace std;

int main(){
    string st = "Prabhat prabhu";
    string st2;

    // Opening a file using constructor and writing it 
    ofstream hey("sample60.txt");//write operation
    hey<<st;

    // Opening files using constructor and reading it 
    ifstream pk("sample60b.txt"); //Read corpation
    pk>>st2;
    getline(pk,st2);
    cout<<st2;

    return 0;
}