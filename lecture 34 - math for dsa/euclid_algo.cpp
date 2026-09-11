#include<iostream>
using namespace std;

int gcd (int a, int b)
{
    while(a>0 && b>0)
    {
        //isme alag se gcd nikalne ki zrurat nh pdri explicitly
        //since eventually dono me se koi remainder 0 dega, and the other number except 0 is the ans only
        //hence basic_gcd.cpp ki trf no explicit gcd code
        if(a>b)
        {
            a = a%b;
        } else{
            b = b%a;
        }
    }
   return a==0 ? b : a;
}

int main()
{
    int a = 28, b =20;
    cout << gcd(a,b) << endl;
    return 0;
}