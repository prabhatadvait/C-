// There are two types of header file
// 1.System header file: it comes with compiler
#include<iostream>
// 2.User defined header file: It is written by the programmer 
/* #include"pk.a" --> This will throw an error if this file is
 not present in current directory */
using namespace std;

int main(){
    int a = 6,b = 5;
    cout<< "Operators in c++"<<endl;
    cout<<"Following are the operators in c++"<<endl;
    // Airthematic operators
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of b++ is "<<b++<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of ++b is "<<++b<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of b-- is "<<b--<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<"The value of --b is "<<--b<<endl;
    cout<<endl;
    // Assignment operators --> used to assign values to variables
    // int a = 3, b = 9;
    // char d = 'd';    
    
    // Comparison operators
    cout<<"Following are the types of comparison operators";
    cout<<"The value is a==b is "<<(a==b)<<endl;
    cout<<"The value is a<b is "<<(a<b)<<endl;
    cout<<"The value is a<b is "<<(a<b)<<endl;
    cout<<"The value is a<=b is "<<(a<=b)<<endl;
    cout<<"The value is a>=b is "<<(a>=b)<<endl;

    // Logical operator
    cout<<"Following are the types of Logical operators"<<endl;
    cout<<"The value of this logical and operator is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator is "<<((a==b) || (a>b))<<endl;
    cout<<"The value of ! this operator is "<<(!(a>b))<<endl;
    return 0;
}