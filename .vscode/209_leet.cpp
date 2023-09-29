#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    sort(nums.rbegin(), nums.rend());
    // reverse(nums.begin(), nums.end());
        int i = 0, count = 0;
        int k = target;
        while(k!=0){
            k = k-nums[i];
            cout<<k<<endl;
            count++;
            i++;
        }
        cout<<count;
        return count;
}