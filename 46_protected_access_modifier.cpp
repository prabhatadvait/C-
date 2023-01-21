#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;

};
/*
For a protected member: 
                      Public derivation     Private derivation     protected derivation
1.private members     Not inherited         Not inherited          Not inherited
2.protected members   Protected             Private                Protected
3.public members      Public                Private                Protected
*/

class Derived: public Base{

};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; Will not work sine a is protected in both class Base as well as Derived.
    
    return 0;
}