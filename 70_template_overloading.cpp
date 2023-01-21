#include<iostream>
using namespace std;

template <class T>
class Prabhat{
    public:
     T data;
    Prabhat (T a){
        data = a;
    }
    void display();    
};
template<class T>
void Prabhat<T>::display(){
    cout<<data;
}
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
template<class T>
void func(T a){
    cout<<"I am templatised.()"<<a<<endl;
}
template<class T>
void func1(T a){
    cout<<"I am templatised func1()"<<a<<endl;
}
int main(){
    // Prabhat<float> h(5.7);
    // cout<<h.data<<endl;
    // h.display();

    func(4);// Exact match takes the highest priority

    func1(5);    
    return 0;
}