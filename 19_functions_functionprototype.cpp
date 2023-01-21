#include<iostream>
using namespace std;
// Function Prototype
// Type function-name(arguments);    ---->syntax of function prototype
// int sum(int a, int b);   ---> Acceptable
// int sum(int a, b);   ---> Not Acceptable
int sum(int , int );//---> Acceptable
// void g(void); ---> Acceptable
void g(); //--->Acceptable
int main(){
    int num1, num2;
    cout<<"Enter the number: "<<endl;
    cin>>num1;
    cout<<"Enter the number: "<<endl;
    cin>>num2;
    // num1 and num2 are Actual parameters
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    g();
    return 0;
}
int sum(int a,int b){
    // a and b are Formal parameters
    // Here a and b are taking value from actual parameters num1 and num2
    int c= a + b;
    return c;
}
void g(){
    cout<<"\nHello, Good Morning"<<endl;
}