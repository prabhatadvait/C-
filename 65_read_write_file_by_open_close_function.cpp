#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"This is me \n"<<endl;
    out<<"But this is prabhat"<<endl;
    out<<"This is stubborn prabhat"<<endl;
    out<<"he is not so fine "<<endl;
    out<<"He is learning to study"<<endl;
    out.close();
    
    ifstream in;
    string st,st2;
    in.open("sample60.txt");
    // in>>st>>st2;
    // cout<<st<<st2<<endl;

    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}