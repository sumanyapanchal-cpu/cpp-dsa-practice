#include<iostream>
using namespace std;

int GCD(int a, int b)
{

    int gcd = 1;
    if(a==0)
    {
        gcd = b;
    }
    else if(b==0)
    {
        gcd = a;
    }
    else if(a==b)
    {
        gcd = a; //any of the 2 b bh ho skta tha 
    }
    for (int i = 1; i < min(a,b); i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
    
}

int main()
{
    int a = 20, b= 28;
    cout << GCD(a,b) << endl;
    return 0;
}