#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l;
    l.emplace_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    for(int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    // cout << l[2] << endl; // not valid with lists

    return 0;
}