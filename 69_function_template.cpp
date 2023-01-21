#include <iostream>
using namespace std;

// float funAverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
// float funAverage1(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
//}
template <class T>
void swapp(T &c, T &d){
    T temp = c;
    c = d;
    d = temp;
}

template <class T1, class T2>
float funAverage2(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

int main(){
    float a;
    a = funAverage2(6,3);
    // cout<<"The average of a and b is "<<a<<endl;
    printf("The average of number a and b is  %.3f \n",a);
    
    int x=5,  y= 7;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}