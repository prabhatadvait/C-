#include<iostream>
using namespace std;

class Employee{
    
    public:
        int id;
        float salary;
        Employee(int inpid){
            id = inpid;
            salary = 34.0;
        }
        Employee(){}
};
// Syntax for derived class
/* class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc..
}
Note:-
1.Default visiblity mode is private
2.Public visibility mode: Public members of the base class becomes Public members of the derived class
3.Private visibility mode: Public members of base class becomes private members of the derived class 
4.Private members are never inherited.
*/
// Creating a programmer class derived from Employee base class
class Programmer :public Employee{
    public:
        
        Programmer(int inpid){
            id = inpid;
        }
        int languageCode = 9;
    void getData(){
        cout<<id<<endl;
     }
};
int main(){
    Employee prabhat(2),utkarsh(1);
    cout<<"The salary of the two employeer is "<<prabhat.salary<<endl<<utkarsh.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    skillF.getData();
    cout<<skillF.id<<endl;
    return 0;
}