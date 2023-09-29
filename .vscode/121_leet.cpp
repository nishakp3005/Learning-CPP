#include<bits/stdc++.h>
using namespace std;
// [7,1,5,3,6,4] [2, 1, 4]
int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int minPrice = prices[0], profit = 0;
    for(int i = 0; i<prices.size(); i++){
        if(minPrice > prices[i]) minPrice = prices[i];
        if(profit < (prices[i] - minPrice)) profit = prices[i] - minPrice;
    }
    cout<<profit;
    return profit;
}