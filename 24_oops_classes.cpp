#include<iostream>
using namespace std;

class Employee{
public:
    string Name;
    string Company;
    int Age;

    void Introduction(){
        cout<<"Name --> "<<Name<<endl;
        cout<<"Company --> "<<Company<<endl;
        cout<<"Age --> "<<Age<<endl;
    }
};

int main(){
    Employee employee1;
    employee1.Name = "prabhat";
    employee1.Company = "Amazon";
    employee1.Age = 25;
    employee1.Introduction();

    Employee employee2;
    employee2.Name = "Saldina";
    employee2.Company = "YT-codebeauty";
    employee2.Age = 32;
    employee2.Introduction();
    return 0;
}