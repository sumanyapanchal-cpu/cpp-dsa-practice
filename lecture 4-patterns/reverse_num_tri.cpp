#include <iostream>
using namespace std;

int main()
{

    /*output-
    1
    21
    321
    4321
    */
    int n = 4;
    for (int i = 0; i < n; i++)
    {

        for (int j = (i + 1); j > 0; j--) // bcoz usually for straight nnumbers we write for(int j=1; j<=i+1; j++) {idhar 1 to i+1 run kra chaho to 0 to i bh kr skte ho } to isme issi loop k data ko ulta krdiya bs, for(int j = (i+1); j>0; j--) that iis j<1 ko j>0 krdiya and j--
        {
            cout << j << " "; //if u print i+1, then say i=3 to output aaya 4444 not 4321 isliye row 4 me j=4 (i+1 k according yani 3+1), now j-- krke print kro bs
        }
        cout << endl;
    }

    return 0;
}