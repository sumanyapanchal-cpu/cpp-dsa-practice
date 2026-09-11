//this code will give TLE at coding platforms hence better approach to do this is using sieve of
//eratosthenes

#include <iostream>
using namespace std;

void printPrimes(int N)
{
    for (int n = 2; n <= N; n++)
    {
        bool isPrime = true;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << n << " ";
        }
    }
}

int main()
{
    int N = 50;
    printPrimes(N);
    return 0;
}