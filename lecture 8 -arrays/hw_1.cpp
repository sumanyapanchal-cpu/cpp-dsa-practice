#include <iostream>
using namespace std;

// WAF to calculate sum and product of arr in an array
//isme do function banaye hai since ek function ek hi return value kr skta hai
int sum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int product(int arr[], int size)
{
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
    }
    return product;
}

int main()
{
    int arr[3] = {1, 2, 3};

    cout << sum(arr, 3) << endl;
    cout << product(arr, 3) << endl;
    return 0;
}