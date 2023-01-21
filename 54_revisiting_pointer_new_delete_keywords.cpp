#include <iostream>
using namespace std;
 
int main(){
    //Basic example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // new operator 
    // int *p = new int (40);
    float *p = new float(48.4);
    cout<<"The value at address a is "<< *(p)<<endl;

    int *arr = new int [3];
    arr[0] = 10;
    arr[1] = 29; // we can also write *(arr+1)= 29
    arr[2] = 39;
    
    //delete operator
    delete [] arr; 
    // delete arr; 
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[0] is "<<arr[1]<<endl;
    cout<<"The value of arr[0] is "<<arr[2]<<endl;   
    return 0;
}