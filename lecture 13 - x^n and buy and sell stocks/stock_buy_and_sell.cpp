#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>price){
    int maxprofit = 0, bestBuy = price[0];
    for (int i = 1; i < price.size(); i++)
    {
        if(price[i] > bestBuy)
        {
            maxprofit = max(maxprofit, price[i] - bestBuy); //here we are comparing aj k din p bechne ka and phle ka profit, aj bechne ka profit is price[i] that is seeling price - best buy that is buying price
        }
        bestBuy = min(price[i],bestBuy);
    }
    return maxprofit;
}

int main(){
    vector<int>price = {7,1,5,3,6,4};
    cout << maxProfit(price) << endl;
    return 0;
}