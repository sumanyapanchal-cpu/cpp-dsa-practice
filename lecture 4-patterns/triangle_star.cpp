#include <iostream>
using namespace std;

int main()
{

    /*output-

    * --> i=0 and no of stars printed is i+1 = 0+1=1 ilsiye j runs from o to i+1
    ** --> i=1 similarly 1+1=2 and so on...
    *** --> i=2
    **** --> i=3

    */
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}