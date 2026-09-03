#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;
    d.emplace_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);

    for(int val : d)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << d[2] << endl; //valid but same thing not valid with lists

    return 0;
}