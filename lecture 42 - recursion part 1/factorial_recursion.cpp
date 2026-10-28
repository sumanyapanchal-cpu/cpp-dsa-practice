#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0) //since n==1 k liye fact 0 ka base case likh diya bs
    {
        return 1; //base case
    }
    return n * fact(n-1);
}

int main()
{
    cout << fact(5) << endl;
    return 0;
}