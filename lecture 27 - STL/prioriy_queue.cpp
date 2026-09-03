#include<iostream>
#include<queue>
using namespace std;

int main(){
   priority_queue<int , vector<int> , greater<int>>q; //reverse priority queue hence output milega reverse order me 
    q.push(5);
    q.push(3);
    q.push(10);  
    q.push(4);
    

    while(!q.empty()) // ye kehra hai ki jb tk q empty nahi hai tb tk loop run kro 
    {
        cout << q.top() << " "; // top element print kro
        q.pop(); // top element ko remove kro
        // this loop prints it in the reverse fashion as priority_queue is a max-heap data structure and sorted order as well
    }

    
    return 0;
}