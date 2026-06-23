#include <iostream>
using namespace std;

// WAF TO REVERESE AN INTEGER n

int reverse(int num)
{
    int rem;
    int ans = 0;
    while (num > 0)
    {
        rem = num % 10; // remainder is basically that last digit
        ans = ans * 10 + rem; //145 tha to dry run krke mind m socho ki 145 ka 541 hojyga
        num = num / 10; 
    }
    return ans;
}

int main()
{

    cout << reverse(145) << endl;
    return 0;
}