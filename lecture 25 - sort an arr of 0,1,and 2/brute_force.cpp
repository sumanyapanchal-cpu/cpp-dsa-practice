#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void brutesort(vector<int>vec){
    sort(vec.begin(),vec.end());
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}

int main(){
    vector<int>vec={0,1,2,0,1,2,0,1,2};
    brutesort(vec);
    return 0;
}