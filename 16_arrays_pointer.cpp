#include<iostream>
using namespace std;

int main(){

    // Arrays examples 
    int marks[] = {44,45,47,46};
    int mathMarks[4];
    mathMarks[0] = 99;
    mathMarks[1] = 93;
    mathMarks[2] = 92;
    mathMarks[3] = 91;

    cout<<"These are mathMarks "<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    
    cout<<"These are marks "<<endl;
     // You can change the value of array
    marks[2] = 488;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // using for loop
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    // using while loop
    int y = 0;
    while(y<4){
        cout<<"The value of marks "<<y<<" is "<<marks[y]<<endl;
        y++;
    }
    // usng do-while loop
    int z = 0;
    do{
        cout<<"The value of marks "<<z<<" is "<<marks[z]<<endl;
        z++;
    }while(z<4);

    // Pointer and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    return 0;
}