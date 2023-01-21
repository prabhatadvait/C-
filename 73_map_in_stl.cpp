#include<iostream>
#include<map>
#include<string>
using namespace std;
// Map is an associative array
int main(){
    map<string, int> marksMap;
    marksMap["Prabhat"]=98;
    marksMap["tribhuwan lal"]= 88;
    marksMap["Rohan das"]= 7;

    marksMap.insert({{"somu", 244}, {"jhunulal", 77}});
    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter!=marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<" \n";
    }
    return 0;
}