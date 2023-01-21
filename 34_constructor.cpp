#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    // Constructor is a special member function with same name as of the class.
    // It is used to intialize the objects of its class
    // It is automatically invoked whenever an object is created.

    Complex(void); // Construction declaration

    // Complex(void){   We can also write here
    // a = 10;
    // b = 0;
    // }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i " << endl;
    }
};
Complex ::Complex(void)
{ // This is default constructor as it takes no parameter
    a = 10;
    b = 0;
    // cout<<"Hello prabhat "<<endl; --> we can also write this type of function here
}

int main()
{
    Complex c, d, e;
    c.printNumber();
    d.printNumber();
    e.printNumber();

    return 0;
}

/* Characteristics of the Construction

1.It should be declared in the public section of the class
2.They are automatically invoked whenever the object is created
3.They cannot return values and do not have return types
4.It can have default arguments
5.We can referr to their address

*/