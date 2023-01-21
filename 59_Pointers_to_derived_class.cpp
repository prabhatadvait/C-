#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying base class variable var_base "<<var_base<<endl;
        }        
};
class DerivedClass: public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;  //Pointing base class pointer to derived class 
    
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134;  This will throw an error 
    base_class_pointer->display();

    base_class_pointer->var_base = 9800;  // we have changed the var_base (no rocket science)

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base= 5829;
    derived_class_pointer->var_derived = 164;
    derived_class_pointer->display();
    
    return 0;
}