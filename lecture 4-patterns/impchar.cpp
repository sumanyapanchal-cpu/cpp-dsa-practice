#include <iostream>
using namespace std;

int main()
{

    /*output-
    A B C
    D E F
    G H I
    */

    int n = 3;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    return 0;
}