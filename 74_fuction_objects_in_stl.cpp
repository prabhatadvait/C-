#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
    //Function objects(Functor): Function wrapped in a class so that it is available like an object
    int arr[]= {1,77,4,93,6,7}; // it is array
    // sort(arr,arr+5);
    sort(arr,arr+6,greater<int>());
    for(int i =0; i<6; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}