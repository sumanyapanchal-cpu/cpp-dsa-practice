#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // char ch = 'A'; ye yhn declare krna is wrong bcoz nahi to loop k ander ch ka value D hone k baaad usko wapis reset krna pdega A me for next line
    // isliye ch ko outer loop m declare krna hoga taki next line me ch ka value A se start ho jaye

    /*
    
    output-
    A B C D
    A B C D
    A B C D
    A B C D 

    */

    for (int i = 0; i < n; i++)
    {
        char ch = 'A'; // ab isse dono loop run hone k baad vapis value ko A kese kre D k baad, wo jhnanjhat khtm hojygi
        for (int j = 0; j < n; j++)
        {
            cout << ch << " "; // " " ye krta hai thoda sa space dedeta hai bich me
            ch = ch + 1;       // since char memory me ascii value me store hota hai to ye usko +1 krke next value de dega
            // this is type conversion
        }
        cout << endl;
    }
    return 0;
}