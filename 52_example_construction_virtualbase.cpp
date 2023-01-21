#include<iostream>
using namespace std;
/*
Case1:
class B: public A{
    //order of execution of constructor -->first A() then B()
};

Case2:
class A: public B, public C{
    //order of execution of constructor --> first B()  then C() and A()
};

Case3:
class A: public B, virtual public C{
    //order of execution of constructor --> first C()  then B() and A()
};
*/
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class construction called "<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int p){
            data2 = p;
            cout<<"Base2 class construction called "<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};
class Derived: public Base2,public Base1{  //Here Base2 construction will be called it has been
    int derived1,derived2;                  //written first
    public:
        Derived(int a, int b, int c, int d):Base1(a),Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class construction called "<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};
int main(){
    Derived prabhat(4,5,6,7);
    prabhat.printDataDerived();
    prabhat.printDataBase1();
    prabhat.printDataBase2();
   
    return 0;
 }