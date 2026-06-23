#include<iostream>
using namespace std;

bool prime(int n)
{
    bool isprime = true;

    for(int i = 2; i <= n-1; i++)
    {
        if(n % i == 0)
        {
            isprime = false;
            break;
        }
    }

    return isprime; //since function ka return type bool hai toh ya toh true / false me value return krna is better
    //agar return int krte to error aata since tumne koi integer to return hi nhi kra
}

int main()
{
    bool a = prime(17); //isko int a nahi banaya since function bool return krra hai toh usko bool data tyep em hi store krege and not in int

    if(a==true) //can be written as if(a) also iska mtlb directly if(a==true) hota hai and similarly !a bhi (not a)
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }

    return 0;
}