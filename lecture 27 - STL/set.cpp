#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1); //repeated data is not showed and neither the size is affected, size = 5 only

    cout << "lower bound = " << *(s.lower_bound(4)) << endl; //lower bound = 4
    cout << "upper bound = " << *(s.upper_bound(4)) << endl; //upper bound = 5 value just above 4in the set

    for(auto val : s){
        cout<<val<<" ";
    }
    cout << endl;

    return 0;
}