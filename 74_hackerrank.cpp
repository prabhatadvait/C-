#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a,int b,int c,int d){
    int larg;
        if(a>b && a>c && a>d){
          larg =a;
        }
        if(b>a && b>c && b>d){
            larg =b;
        }
        if(c>a && c>b && c>d){
            larg =c;
        }
        if(d>a && d>b && d>c){
            larg =d;
        }
    return larg;        
}

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    
    int bada = max_of_four(a,b,c,d);
    cout<<bada;
    
    return 0;
}