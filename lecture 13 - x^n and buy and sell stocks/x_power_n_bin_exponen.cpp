#include <iostream>
using namespace std;

double binaryExponent(double x, int n) //kuch types double kre hai taki -ve powers me jb 1/3 ki kuch power ho toh wo decimal ko support kr ske
{
    if (n == 0)
    { // corner case
        return 1;
    }
    if (x == 0)
    { // corner case
        return 0;
    }
    if (x == 1)
    { // corner case
        return 1;
    }
    if (x == -1)
    { // imp corner case for odd even powers of -1
        if (n % 2 == 0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    int binForm = n; // mtlb ki n ki binary form ko store krne k liye ek variable banaya
    double ans = 1;
    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm; // 3^-5 ko -(-5) = +5 krdo
    }
    while (binForm > 0)
    {
        if (binForm % 2 == 1) // this is basically saying ki last digit nikalo and agar wo 1 aaye to
        {
            ans = ans * x; // ans ko x se multiply krdo
        }
        x *= x;       // x update that is squaring hogyi hai
        binForm /= 2; // ye basically last digit ko remove krne k liye hai
    }
    return ans;
}
int main()
{
    double x = 3, n = -5;
    cout << binaryExponent(x, n) << endl;
    return 0;
}