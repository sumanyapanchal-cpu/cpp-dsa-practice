#include<iostream>
#include<climits>
using namespace std;

int reverse(int num)
    {
        int revNum = 0;

        while (num != 0)
        {
            int lastDigit = num % 10;

            if (revNum > INT_MAX / 10 ||
                (revNum == INT_MAX / 10 && lastDigit > 7))
                return 0;

            if (revNum < INT_MIN / 10 ||
                (revNum == INT_MIN / 10 && lastDigit < -8))
                return 0;

            revNum = revNum * 10 + lastDigit;
            num = num / 10;
        }

        return revNum;
    }
    bool isPalindrome(int n) {
        if(n < 0) return false;

        int revNum = reverse(n);
        return n==revNum ? true:false;
        
    }

int main()
{
    cout << isPalindrome(121) << endl;
    return 0;
}