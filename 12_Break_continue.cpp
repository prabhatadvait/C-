#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 4; i++)
    {
        /* Break statement*/
        if(i==2){
            break;
        }
        cout<<i<<endl;
    }

    // Continue statement
    for (int y=0; y<40; y++ )
    {
        /*code*/
        if(y==2){
            continue;  
        }
        cout<<y<<endl;
    }
    return 0;
}