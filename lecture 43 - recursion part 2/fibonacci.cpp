#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
    {
        return n; //base case
    }
    return fib(n-1) + fib(n-2);
}

int main()
{
   // cout << fib(7) << endl;
   for(int i = 0; i<=7; i++)
   {
    cout << fib(i) << " ";
   }
    return 0;
}