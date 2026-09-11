#include <iostream>
#include <vector>
using namespace std;

int countPrime(int n)
{
    vector<bool> isPrime(n + 1, true); // vector declared
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i]) // for 2nd iteration kuch nos already cancelled hoge to wo evaluate nahi hoge
        {
            count++; // and issi number k multiples ko discard krne k liue nested for

            for (int j = i * 2; j < n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }

    return count;
}

int main()
{
    int n = 50;
    cout << countPrime(n) << endl;
    return 0;
}