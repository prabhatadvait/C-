#include<iostream>
using namespace std;

int fib(int m){
    if(m<2){
        return 1;
    }
    return fib(m-1) + fib(m-2);
}   

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}   //let's say factorial(4)
    // step by step factorial 
    // factorial(4)= 4 * factorial(3)
    // factorial(4)= 4 * 3 * factorial(2)
    // factorial(4)= 4 * 3 * 2 * 1
    // This is the process going to be done

int main(){
    // Factorial of a number 

    // Factorial of n number is like ,
    // n! = n * (n-1)!
    // 6! = 6 * 5 * 4 * 3 * 2 * 1
    // This is how factorial done
    int a;
    int b;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;

    cout<<"Enter the number"<<endl;
    cin>>b;
    cout<<"The term in fibancci sequence at position "<<b<<" is "<<fib(b)<<endl;

    
    return 0;
}