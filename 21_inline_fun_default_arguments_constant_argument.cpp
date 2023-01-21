#include<iostream>
using namespace std;
inline int product(int z, int y){
    // Not recommended to use below lines with inline function
    // static int c = 0; This executes only once
    // c = c +  1; Next time this function will run, the value of c will be retained
    return z*y;
}
float moneyReceived(int currentMoney,float factor=1.04){
    return currentMoney * factor;
}
int main(){
    int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    
    // cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<"Rs in your bank account, you will receive "<<moneyReceived(money)<<"Rs after 1st year"<<endl;
    cout<<"For VIP, if you have "<<money<<"Rs in your bank account, you will receive "<<moneyReceived(money,1.20)<<"Rs after 1st year"<<endl;
    return 0;
}