#include<iostream>
using namespace std;

int fib(int n){
    if(n==1 || n==2){
        return (n-1);
    }
    else{
        return fib(n-1) + fib(n-2);
        
        
    }
}
int main(){
    

    //cout << fib(8) << endl; this would print 8th element ilsiye to print 1-8 all element loop run
    
    for (int i = 1; i < 15; i++) //loop from 1 bcoz i=0 kuch hota nhi h 
    {
        cout << fib(i) << " ";
    }
    

    return 0;
}