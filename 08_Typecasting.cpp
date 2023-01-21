#include <iostream>
using namespace std;

int main(){
    // ********** Typecasting **********
    int a = 45;
    float b = 45.6;
    cout<<"The value of a is "<<float(a)<<endl;
    // -----------or-----------
    // cout<<"The value of a  is "<<(float)a<<endl;

    cout<<"The value of b is "<<int(b)<<endl;
    // -------------or------------
    // cout<<"The value of b is "<<(int)b<<endl;

    // int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;

    return 0;
}