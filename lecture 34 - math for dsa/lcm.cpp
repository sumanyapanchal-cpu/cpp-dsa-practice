#include<iostream>
using namespace std;

int gcd1 (int a, int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a = a%b;
        } else{
            b = b%a;
        }
    }
   return a==0 ? b : a;
}

int lcm(int a, int b)
{
    int gcd = gcd1(a,b);
    return ((a*b) / gcd );
}
int main()
{
    int a = 28, b =20;
    cout << lcm(a,b) << endl;
    return 0;
}