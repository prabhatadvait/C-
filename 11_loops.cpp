#include <iostream>
using namespace std;

int main(){
    
    /* Loops in c++ 
    1.for loops
    2.while loops
    3.do-while loops
    */

//    1.For loops 
    // int i=1;
    // cout<<i;
    // i++;
    // Syntax for for loop
    // for(intialization;condition;updation)
    // {
        // loop body(c++ code);
    // }   

    for (int i=1; i<=100; i++)
    {
       /**/
        cout<<i<<endl;
    } 
    // Examples of infinite loop in for
    // for (int i=1; 34 <= 40; i++)
    // {
        /**/
        // cout<<i<<endl;    
    // }
    // 2.While loop in c++ 
    // Syntax:
    // while(condition)
    // {
        // C++ statements;
    // }
    // Printing 1 to 40 using while loop 

    int y = 1;
    while(y<=40){
        cout<<y<<endl;
        y++;

    }
    // Examples of infinite loop in while

    // int i = 1;
    // while(true){
        // cout<<i<<endl;
        // i++;
    // }

    // 3.Do-while loop in c++
    // Syntax:
    // do
    // {
        // c++ statement
    // } while (condition);
    int z=1;
    do{
        cout<<z<<endl;
        z++;

    }while(z<=40);
    return 0;
}   