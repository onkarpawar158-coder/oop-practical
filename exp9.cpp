#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(){
    map<string,long long> states;

    //insert state names and population
    states["Maharashtra"] = 125000000;
    states["Goa"] = 1600000;
    states["Gujarat"] = 70000000;
    states["Kerala"] = 36000000;
    states["Rajasthan"] = 81000000;

    string state; // reads the complete input line

    cout<<"Enter the state name:";
    getline(cin,state);

    //search state in map
    if(states.find(state) != states.end()){
        cout<<"population of "<<state<<" is: "<<states[state]<<endl;
    }
    else{
        cout<<"state not found!"<<endl;
    }
    return 0;
}