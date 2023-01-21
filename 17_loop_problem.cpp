#include<iostream>
using namespace std;
// Sum of first n natural number using while loop
int main(){
    int num;
    cout<<"Enter the number  ";
    cin>>num;
    int i=1,sum = 0;
    while(i<=num){
                    // Instead of putting 'cout' here we have to put it out of loop
       sum = sum + i;  //If we don't put then it will print all thing like
                            //sum = sum + i
       i++;             //   0   =   0  + 1=1
                        /*1  = 1 + 2 = 3
                         3  = 3  +  3 = 6
                         6  = 6  +  4 = 10
                         10  = 10 + 5  = 15
                        but we have to print only one that is last one*/
    }cout<<"The sum is  "<<sum<<endl; //due to that we put here ,out of loop 
    
    // Using for loop 
    int gum = 0;
    int num1;
    cout<<"Enter the number: ";
    cin>>num1;
    for(int z=1; z<=num1; z++)
    {   gum = gum + z;
        // Instead of putting 'cout' here we have to put it out of loop
    }cout<<"The sum of first n natural number  "<<gum<<endl;
    return 0;
}