#include <iostream>
#include <climits>
using namespace std;

int reverse(int num)
{
    int revNum = 0;
    bool negative = num < 0; // true
    if (negative)            // means if -ve true
    {
        num = -num;                                         // positive k hisab se sara cal
        if (revNum < INT_MIN / 10 || revNum > INT_MAX / 10) // integer overflow check
        {
            return 0;
        }
        while (num > 0)
        {
            int lastDigit = num % 10;
            revNum = revNum * 10 + lastDigit;
            num = num / 10;
        }
        if (negative)
        {
            revNum = -revNum;
        }

        return revNum;
    }
}
int main()
{
    cout << reverse(-123) << endl;
    return 0;
}