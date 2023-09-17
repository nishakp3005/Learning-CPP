#include<bits/stdc++.h>
using namespace std;

int main(){
    int size, ans;
    cin>>size;
    int arr1[size];
    for (int i = 0; i < size; i++){
        cin>>arr1[i];
    }
    
    int arr2[size];
    for (int i = 0; i < size; i++){
        ans = ans ^ arr1[i];
        arr2[i] = ans;
    }
    ans = 0;
    for (int i = 0; i < size; i++){
        ans = ans ^ arr2[i];
    }
    cout<<ans;
    return 0;
}