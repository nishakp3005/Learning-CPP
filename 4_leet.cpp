#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1 = {1, 3};
    vector<int> v2 = {2, 4};
    for(int i = 0; i < v2.size(); i++){
        v1.push_back(v2[i]);
    }
    int n = v1.size();
    sort(v1.begin(), v1.begin() + n);
    for (int i = 0; i < v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    double ans;
    if(n%2 == 0){
        cout<<v1[n/2 - 1]<<" "<<v1[n/2]<<endl;
        cout<<v1[n/2 - 1] + v1[n/2]<<endl;
        ans = (v1[n/2 - 1] + v1[n/2])/2.0;
        cout<<ans<<" ";
    }
    
    return 0;
}