#include<iostream>
using namespace std;

class A {
    int a;
    public:
        // A & setData(int a){
        void setData(int a){
            this->a = a; // this pointer is used here
            // return *this;
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    // this is a keyword which is a pointer which points to the object which  invokes the 
    // member function
    A f;
    f.setData(6);
    f.getData();
    return 0;
}
