#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {0,1,0,3,12};
    int n = nums.size();
    int i = 0;
    int j = 1;
    while(j<n){
        if(nums[i]==0 && nums[j]!=0){
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
        else if(nums[i]==0 && nums[j]==0){
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    for(int i = 0; i < nums.size(); i++) cout<<nums[i]<<endl;
    return 0;
}