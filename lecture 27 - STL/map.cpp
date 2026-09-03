#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> m;
    m["tv"] = 100; //sqaure bracket se kaam hua hai but multimap me ye kaam nahi hoga kyuki multimap me ek hi key ke multiple values ho skte hai isliye humko insert ya emplace function use krna padega
    m["laptop"] = 100;
    m["headphone"] = 50; //since key and value ke pair type hai isliye hum pairs use kr skte hai to print it

    //note- ye sara data me jo key hai output me wo lexicographically sorted order me print hoga as map is implemented using self balancing binary search tree which means ki alphabetically sorted order me print hoga

    m.insert({"camera", 20}); //insert function use krke bhi hum key value pair ko insert kr skte hai
    //insert function me humko pair banakr dena pda hence curly brace

    m.emplace("mobile" , 200); //emplace function use krke bhi hum key value pair ko insert kr skte hai wihtout curly braces

    cout << m.count("laptop") << endl; //count function ye check krta hai ki given key present hai ya nahi agar present hai to 1 return krega otherwise 0 return krega

    //to just print the value of any key-
    cout << m["laptop"] << endl; //ye laptop key ka value print krega

    m.erase("tv"); //output me tv nahi dikega ab 

    for(auto p: m){

        cout << p.first << " " << p.second << endl;
        
    }

    if(m.find("camera") != m.end()){
        cout << "found" << endl;
    } else{
        cout << "not found" << endl;
    }

    return 0;
}