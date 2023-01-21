#include <iostream>
using namespace std;

class Employee{
    private:
        int id;
        static  int count;
    public:
        void setData(void){
            cout<<"Enter the id of the Employee "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of the employee is "<<id<<" and this is employee number "<<count<<endl;

        }
        static void getCount(){
            /*cout<<id<<endl; throws an error because we have a static function and in static function 
            only static member will be executed.*/
            cout<<"The value of the count is "<<count<<endl;
        }
};
// count is the static data member of the class Employee 
int Employee ::count; //In case of static default value of count is 0
// Instead of up line we can also write int Employee:: count= 1000;
int main(){
    Employee prabhat, roshan,utkarsh;
    // prabhat.count = 1; we can do like that because it is in private specifier 
    // prabhat.id = 1; This will throw an error because of it's in private specifier
    prabhat.setData();
    prabhat.getData();
    Employee::getCount();

    roshan.setData();
    roshan.getData();

    utkarsh.setData();
    utkarsh.getData();

    return 0;
}