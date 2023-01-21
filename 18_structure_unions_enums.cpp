#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
}ep;
union money
{
    /**/
    int rice;
    char car;
    float pounds;
};
// By using typedef we made a short of struct employee as a "ep"
int main(){
    enum Meal{breakfast,lunch,dinner };
    Meal M1 = breakfast;
    cout<<(M1==0)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;


    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.car<<endl; 
    
    
    ep prabhat;
    struct employee prashant;
    struct employee prakash;
    prabhat.eId = 1;
    prabhat.favChar = 'p';
    prabhat.salary = 1200000;
    cout<<"The value is "<<prabhat.eId<<endl;
    cout<<"The value is "<<prabhat.favChar<<endl;
    cout<<"The value is "<<prabhat.salary<<endl;
    return 0;
}