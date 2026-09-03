#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);  
    cout << q.front();

    while(!q.empty()) // ye kehra hai ki jb tk q empty nahi hai tb tk loop run kro 
    {
        cout << q.front() << " "; // front element print kro
        q.pop(); // front element ko remove kro
        // this loop prints it in the reverse fashion as queue is a FIFO data structure
    }

    queue<int>q2;
    q2.swap(q); // q2 me q ka content aa gya and q empty ho gya to verify this print the sizes of both
    cout << "size of q:" << q.size() << endl;
    cout << "size of q2:" << q2.size() << endl;
    return 0;
}