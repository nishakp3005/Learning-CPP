#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> nums = {{3, 1, 2, 4, 5},{1, 2, 3, 4},{3, 4, 5, 6}};
    int i = 1, n;
    while(i <= nums.size()){
        n = nums[i].size();
        while(n){
            if(nums[i][n] == nums[i+1][n]) 
            n--;
        }   
        i++;
    }
    return 0;
}