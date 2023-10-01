#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    int maxL = height[0], maxR = height[height.size()-1];
        int i = 0, j = height.size()-1, ans = 0;
        while(i < j){
            maxL = max(maxL, height[i]);
            maxR = max(maxR, height[j]);
            if(height[maxL] <= height[maxR]){
                i++;
                cout<<"i : "<<i<<" maxL : "<<maxL<<endl;
            }
            else if(height[maxL] > height[maxR]){
                j--;
                cout<<"j : "<<j<<" maxR : "<<maxR<<endl;
            }
            if((i != 0 && j!=height.size()-1) && (maxL - height[i] > 0) || maxR - height[j] > 0) {
                ans++;
                cout<<"ans : "<<ans<<endl;
            }
        }
        cout<<"final : "<<ans<<endl;
        return ans;
    return 0;
}