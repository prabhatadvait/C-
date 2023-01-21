#include <iostream>
#include <iomanip>  //for manipulators
using namespace std;

int main(){
    // int a = 4;
    // cout<<"The value of a was  "<<a<<endl;

    // a = 45;
    // cout<<"The value of a is "<<a<<endl;
    // Constants in c++
    // const float a = 3.14;
    // cout<<"The value of a was "<<a<<endl;
    //  a = 45.2;--->  This will throw an error just because of a is  constant
    // cout<<"The value of a is "<<a<<endl;     
    
    // Manipulators in c++
    // int a = 3, b = 12, c = 1233;
    // cout<<"The value of a without setW "<<a<<endl;
    // cout<<"The value of b without setw "<<b<<endl;
    // cout<<"The value of c without setw "<<c<<endl;

    // cout<<"The value of a is "<<setw(5)<<a<<endl;
    // cout<<"The value of b is "<<setw(5)<<b<<endl;
    // cout<<"The value of c is "<<setw(5)<<c<<endl;
    // return 0;

    // Operators precedence
    int a = 3 ,b = 4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c<<endl;
    return 0;
}