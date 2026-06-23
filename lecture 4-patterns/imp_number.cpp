#include <iostream>
using namespace std;

/*output
1 2 3
4 5 6
7 8 9
*/

int main()
{
    int n = 3;
    int num = 1; //ye num create kra taki value increase ho ske
    //and is num ko humko 123 k baad 1 pr wapis reset NAHI krna isliye outer loop se bahar print kra hai 
    //agr outer loop k ander rkh dete to wo num 123 print krta then wapis 123 123 and so on krke rest hojata
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}