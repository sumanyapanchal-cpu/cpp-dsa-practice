#include<iostream>
#include<vector>
using namespace std;

/*LOGIC-
let vector be = {4,1,2,1,2}
1st iteration se phle ans me =0 hai then
1st iteration hit hui and then ans = 0 ^ 4 = 4 from the property ki a ^ 0 = a
then 2nd iteration hit hui and then ans = 4 ^ 1 bana
then 3rd iteration hit hui and then ans =  4 ^ 1 ^ 2  bana
then 4th iteration hit hui and then ans = 4 ^ 1 ^ 2 ^ 1  bana but ab 1 ^ 1 aagya that is 0 so ans = 4 ^ 2
then 5th iteration hit hui and then ans =  4 ^ 2 ^ 2 aaya and again 2^2 = 0 hogya isliye ans = 4 rha
and aise 4 jo finaly bacha jo humara hogya unique element using one single for each loop

toh mota mota ki jo non unique hai wo xor operator se kat jyge
and sirf unique element hi bachege
 */

int singleNumber(vector<int>vec , int size){
    int ans = 0;
    for(int value : vec){
        ans = ans ^ value;
    }
    return ans;
}

int main(){
    vector<int>vec = {4,1,2,1,2};
    int size = vec.size();

    cout << singleNumber(vec,size);
    return 0; 
}