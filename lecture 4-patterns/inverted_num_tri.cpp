#include<iostream>
using namespace std;


int main(){

    /*output
     and n =4 fixed hai 
                        SPACES-    NUMBERS-  PATTERN-                       PRINT-
    1 1 1 1 --> i=0 --> 0spaces       4       n-i numbers (4-0) = 4              i+1 IS BEING PRINTED in each iternatio
      2 2 2 --> i=1 --> 1 space       3       n-i= 4-1=3 number and so on...
        3 3 --> i=2 --> 2 space       2
          4 --> i=3 --> 3 space       1
          and now number of spaces in front of the number is equal to i

logic-
thus hum use krege 2 ineer loops, ek spaces k liye and ek number k liye

        */

        int n=4;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " "; //to add spaces and loop from 0 to i bcoz no of spcaes= i
            }

            for (int j = 0; j < (n-i); j++)
            {
                cout << (i+1); //bcoz har loop me i+1 number print hora hai and spaces skipped bcoz upr alagse spaces print hogyi
            }
            
            cout << endl;
        }
        
    return 0;
}