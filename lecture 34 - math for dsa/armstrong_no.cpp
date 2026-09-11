#include<iostream>
//#include<math.h>
using namespace std;

bool isArmstrong(int n)
{
    int copy = n; //taki last me cubes ko same number k sath comapre kr ske since normal n toh har baar update hora hai
    int SumOfCube = 0; 
    while(n != 0)
    {
    int lastDigit = n%10;
    SumOfCube += (lastDigit * lastDigit * lastDigit);
    n = n/10;
    }
    
    return SumOfCube == copy; //if true
    //tc = 0(logn) 
}

int main()
{
    int n = 153;
    if (isArmstrong(n))
    {
       cout << "is an armstrong number" << endl;
    } else {
        cout << "is not an armstrong number" << endl;
    }
    
    return 0;
}