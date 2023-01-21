#include <iostream>
using namespace std;
/*
Syntax for intialization list in construction:
constructor (argument-list ) : intialization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i ,int j): a(i), b(j){constructor-body}
}
*/
class Test{
    int a;
    int b;
    public:
        // Test(int i, int j) : a(i), b(j){cout<<"This is prabhat "<<endl;}
        // Test(int i, int j) : a(i), b(i+j)
        // Test(int i, int j) : a(i), b(2 * j)
        // Test(int i, int j) : a(i), b(a + j)
        // Test(int i, int j) : b(j), a(i + b) -->This will create problem because a will be
        //   intialized first as a is written before b
        Test(int i, int j){
            a = i;
            b = j;
            cout<<"Constructor executed"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }

};


int main(){
    Test t(8,9);
    
    return 0;
}