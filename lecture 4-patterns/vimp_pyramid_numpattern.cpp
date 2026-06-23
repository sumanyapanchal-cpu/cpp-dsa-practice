#include<iostream>
using namespace std;

int main(){

    /*output-
n=4 ye to fixed hai

          1       i=0 
        1 2 1     i=1
      1 2 3 2 1   i=2
    1 2 3 4 3 2 1 i=3 

    har line ki spacing-
    for trianhle 1 --> n-i-1 spaces ( to the left)
    logic- 
    break this pattern into 2 trianhles
    1st triangle-
    
        1 //line 7 se 100 tk ka middle line se split hua trianhle
      1 2 
    1 2 3 
  1 2 3 4  

  and 2nd trianhle- 
  1 //8-10 line tk ka right to middle line split hua triangle
  2 1
  3 2 1

  logic for loops-
  1st outer loop- i=0 to i<n tk chalega as usual

  1st inner loop (for triangle 1 ki spaces) - ye j=0 to j<n-i-1 times run hoga and cout << " ";
  2nd inner loop (for triangle 1 k nums) - j=0 to j<i+1 run hoga and cout<<j since j = i+1 for this loop
  3rd inner loop (for triangle 2 k nums bcoz unki spaces towards right hai to wo print nh hogi)-
  backward loop run hoga from j=i to j=1

     */

     int n=4;
     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < (n-i-1); j++) //space ka loop for t1
        {
            cout << " "; 
        }
        for (int j = 1; j <= (i+1); j++) // values for t1, initialised by 1 coz 0 print nh krwana, 1 se shuru krna hai 
        
        {
            cout << j;
        }
        
        for (int j = i; j >= 1; j--)
        /*logic for this loop-
        1234321 ye print krwana hai row 4 me 
        1234 4321 nahi (basically jo t1 ka last number h usme se 1 minus krke shuru krna hai and 1 tk leke aana hai in backward order)
        isliye hum j=i se shuru krre hai taki wo number basically repeat na ho 
        and humko pta to hai ki ki backwards loop lgega
        toh int j=i se shuru kra
        and ab j=i se leke humko 1 tk aana hai isliye aise loop likha
        and 1 ko include krna hai with sign flips ilsiye j>=1 likha
         */
        {
            cout << j;
        }
        
        cout << endl;
     }
     
    return 0;
}