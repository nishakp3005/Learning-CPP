#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr, arr + size);
    vector<int>::iterator it;
    it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    cout<<v[v.size()-2]<<endl;
    return v[v.size()-2];
}