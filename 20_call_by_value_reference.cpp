#include<iostream>
using namespace std;
int sum(int a, int b ){
    int c = a + b;
    return c;
}
// This will not swap a and b 
void swap(int a, int b){//temp  a   b
    int temp = a;       //  4   4   5
    a = b;              //  4   5   5
    b = temp;           //  4   5   4
}
// Call by reference using pointer
void swapPointer(int* a, int* b){//temp  a   b
    int temp = *a;       //  4   4   5
    *a = *b;              //  4   5   5
    *b = temp;           //  4   5   4
}
// Call by reference using c++ reference variable
// int & swapReferenceVar(int &a ,int &b){
void swapReferenceVar(int &a ,int &b){
    int temp = a;        //  4   4   5
    a = b;               //  4   5   5
    b = temp;            //  4   5   4
    // return a;
}
int main(){
    int x = 4, y = 5;
    cout<<"The sum of 4 and 5 is "<<sum(x,y)<<endl;
    cout<<"The value of x is "<<x<<" The value of b is "<<y<<endl;
    // swap(x,y); // This will not swap a and b

    // swapPointer(&x,&y); This will swap a and b using pointer reference

    //swapReferenceVar(x , y)= 766; // This will swap a and b using reference variable 
    swapReferenceVar(x,y);
    cout<<"The value of x is "<<x<<" The value of b is "<<y<<endl;
    return 0;
}