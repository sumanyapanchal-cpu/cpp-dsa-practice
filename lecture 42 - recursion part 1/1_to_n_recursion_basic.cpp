#include<iostream>
using namespace std;

void printNum(int n)
{
    if(n == 1) //base case
    {
        cout << n << " ";
        return; //agar ye nhi likha to pura infinite loop me chala jayega
    } 
    cout << n << " ";
    printNum(n-1);
    
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    printNum(n);
    return 0;
}