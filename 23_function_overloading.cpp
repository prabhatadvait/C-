#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<"Using functions with 2 arguments"<<endl;
    return a+b;
}

int sum(int a,int b, int c){
    cout<<"Using functions with 3 arguments"<<endl;
    return a+b+c;
}
// calculate the volume of cylinder
int volume(double r,int h){
    return (3.14 * r * r * h);
}

// calculate the volume of cube
int volume(int a){
    return (a * a * a); 
}

// calculate the volume of cuboid
int volume(int l,int b,int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of a and b is "<<sum(3,6)<<endl;
    cout<<"The sum of a,b and c is "<<sum(3,6,7)<<endl;

    cout<<"The volume of cuboid is "<<volume(4,5,2)<<endl;

    cout<<"The volume of cube is "<<volume(3)<<endl;

    cout<<"The volume of cylinder is "<<volume(1.50,2);
    return 0;
}