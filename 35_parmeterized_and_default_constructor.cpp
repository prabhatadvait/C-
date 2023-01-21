#include <iostream>
using namespace std;

class Complex{
    int a,b;
    public:
        Complex(int,int);//Constructor declaration

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i "<<endl;
        }
};

Complex::Complex(int x, int y){  //--> This is parameterized constructor
    a = x;
    b = y;
}

int main(){
    // Implicit call 
    Complex a(1,3);
    a.printNumber();
    // Explicit call    
    Complex b = Complex(5,7); 
    b.printNumber();
    return 0;
}