#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int i = 0, j = height.size()-1, ans = 0;
    while(i<j){
        ans = max(ans, ((j-i)*(min(height[i],height[j]))));
        while((i<j) && (height[i] <= height[j])){
            i++;
            ans = max(ans, ((j-i)*(min(height[i],height[j]))));
        } 
        while((i<j) && (height[i] > height[j])){
            j--;    
            ans = max(ans, ((j-i)*(min(height[i],height[j])))); 
        }
    }
    return ans;
}

    