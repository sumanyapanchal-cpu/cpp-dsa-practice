#include<iostream>
#include<cmath>
using namespace std;

void printDigits(int n)
{
    while(n > 0){
    int lastDigit = n%10;
    cout << lastDigit << endl;
    n = n/10;
    }
    
}

int countDigits(int n)
{
    int count = 0;
    while(n > 0){
    int lastDigit = n%10;
    count ++;
    n = n/10;
    }
    return count;
}

int sumDigits(int n)
{
    int sum = 0;
    while(n > 0){
    int lastDigit = n%10;
    sum += lastDigit;
    n = n/10;
    }
    return sum;
}

int main()
{
    int n = 3568;
    printDigits(n);
    cout << countDigits(n) << endl;
    cout << sumDigits(n) << endl;

    //shortcut to calculate the no of digits in any value -
    cout << (int)(log10(n) + 1) << endl; //cmath used for log10 fxn
    return 0;
}