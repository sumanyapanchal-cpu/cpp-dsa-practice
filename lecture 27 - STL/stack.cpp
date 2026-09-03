#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);  
    cout << s.top();

    while(!s.empty()) // ye kehra hai ki jb tk s empty nahi hai tb tk loop run kro 
    {
        cout << s.top() << " "; // top element print kro
        s.pop(); // top element ko remove kro
        // this loop prints it in the reverse fashion as stack is a LIFO data structure
    }

    stack<int>s2;
    s2.swap(s); // s2 me s ka content aa gya and s empty ho gya to verify this print the sizes of both
    cout << "size of s:" << s.size() << endl;
    cout << "size of s2:" << s2.size() << endl;
    return 0;
}