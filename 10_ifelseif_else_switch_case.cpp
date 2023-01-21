#include <iostream>
using namespace std ;

int main(){
    int age;
    cout<<"Tell me your age "<<endl;
    cin>>age;
    
    //   Selection control structure :-if elseif else ladder

    // if(age<18){
    //     cout<<"you cannot come to my home"<<endl;
    // }
    // else if (age==19){
    //     cout<<"you are such a loose guy "<<endl;
    // }
    // else if (age==18){
    //     cout<<"you also cannot come to my home"<<endl;
    // }
    // else{
    //     cout<<"you can come to my home "<<endl;
    // }

    // selection control structure--> switch case
    switch (age)
    {
    case 18:
        
        cout<<"You are 18"<<endl;
        break;
    case 22:
        
        cout<<"you are 22"<<endl;
        break;
    case 2:
        
        cout<<"you are 2"<<endl;
        break;
    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch cases"<<endl;
    return 0;
}