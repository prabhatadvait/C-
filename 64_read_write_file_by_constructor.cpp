#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // connecting our file with file prabhat statement
    ofstream prabhat("sample60.txt");

    // Creating a name string and filling it with the string entered by user
    string name;
    cout<<"Enter the name "<<endl;
    cin>>name;

    // Writing a string to the file
    prabhat<<"My name is "+ name;
    prabhat.close();

    ifstream sharma("sample60.txt");
    string content;
    sharma>>content;
    cout<<"The content of this file is: "<<content;
    sharma.close();
    return 0;
}