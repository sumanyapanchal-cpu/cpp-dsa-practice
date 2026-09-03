#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool customComparator(pair<int , int> p1 , pair<int , int>p2){ // 2 pairs assume kre humne
    if(p1.second < p2.second){ //mtlb sahi jare ho in ascending order
        return true;
    }
    else if(p1.second > p2.second){ 
        return false;
    }
    else if (p1.second == p2.second){ //mtlb dono ka 2nd element same hai to 1st element ke basis pe sort krdo
        if(p1.first < p2.first){
            return true;
        }
        else{
            return false;
        }
    }
    else return false;
    
}

int main(){

    vector<pair<int, int>> v = {{1, 2}, {84,15}, {14 , 10}};
    sort(v.begin() , v.end() , customComparator); //this sorting is done by the 2nd element of the pair using custom comparator function
    //to sort on the basis of 2nd element of the pair we will use a custom comparator function

    for(auto p : v){
        cout << p.first << " " << p.second << endl;
    }
   
    return 0;
}