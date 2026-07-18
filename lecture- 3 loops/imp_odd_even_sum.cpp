#include <iostream>
using namespace std;
//to calculate the sum of all even numbers only

int main()
{
    int n, sum = 0;
    cout << "enter n";
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i%2 ==0){
            sum += i;
            //sum = sum + i;
        }
    }
    cout << "sum is: " << sum << endl;
    return 0;
}