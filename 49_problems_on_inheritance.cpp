#include <iostream>
#include<cmath>
using namespace std;

/*Questions
  Create 2 classes:
  1.Simplecalculator --> Takes input of 2 numbers using a utility function and 
  performs +,-,*,/ and displays the results using another function.
  2.ScientificCalculator - > Takes input of 2 numbers using a utility function 
  and performs any four scientific operation of your choice and display the result 
  using another function .
  
  Create another class HybridCalculator and inherit it using these 2 classes:
  Q1. What type of inheritance are you using ?
  Q2. which mode of inheritance are you choosing?
  Q3. Create an object of HybridCalculator and display results of simple and 
     Scientific calculator?*/

class Simplecalculator{
    protected:
        int data1,data2;
    public:
        void Caldata(){
            int a;
            int b;
            cout<<"Welcome to simple calculator "<<endl;
            cout<<"Enter the data1 "<<endl;
            cin>>a;
            cout<<"Enter the data2 "<<endl;
            cin>>b;

            data1 = a;
            data2 = b;
            
        }
        
        void Display(){
            
            cout<<"The summation of  data1 and data2 is "<<data1 + data2<<endl;
            cout<<"The Multiplication of  data1 and data2 is "<<data1 * data2<<endl;
            cout<<"The Subtraction of  data1 and data2 is "<<data1 - data2<<endl;
            cout<<"The Divide of  data1 and data2 is "<<data1 / data2<<endl;
        }
};

class ScientificCal{
    protected:
        int data3,data4,data5,data6;
    public:
        void Solvdata(){
            int x,y,p,q;
            cout<<"Welcome to utkarsh Scientific calculator "<<endl;
            cout<<"Enter the data of sin$ "<<endl;
            cin>>x;
            // cout<<"Enter the data of tan$ "<<endl;
            // cin>>y;
            // cout<<"Enter the data of cos$ "<<endl;
            // cin>>p;
            // cout<<"Enter the data of cot$ "<<endl;
            // cin>>q;
            data3 = x;//sin
            data4 = y;//tan
            data5 = p;//cos
            data6 = q;//cot
        }
        void show(){
            if(data3==30){
                cout<<"The sin of angle 30 is = 1/2"<<endl;
            }
            else if (data3==45){
                cout<<"The sin of angle 45 is = 1/sqrt of 2 "<<endl;
            }
            else if (data3==60){
                cout<<"The sin of angle 60 is = (sqrt of 3)/2"<<endl;
            }
            else if (data3==90){
                cout<<"The sin of angle 90 is = 1"<<endl;
            }
            
            else{
                cout<<"Hey gadga, just put integer \n"<<endl;
            }
            cout<<"Made in India \n"<<endl;
            cout<<"By Prabhat"<<endl;
        }
        

    
};
class HybridCal : public Simplecalculator,public ScientificCal{
    int r;
    public:
        void Harsha(){
            Simplecalculator::Caldata(),Display();
        }
        void Roshan(){
            ScientificCal::Solvdata(),show();
        }

};

int main(){
    // Simplecalculator prabhat;
    // prabhat.Caldata();
    // prabhat.Display();

    // ScientificCal advait;
    // advait.Solvdata();
    // advait.show();
    HybridCal rnsit;
    rnsit.Harsha();
    rnsit.Roshan();
    return 0;
}
// Q1 ans--> multiple
// Q2 ans --> Public