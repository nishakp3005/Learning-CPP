#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, mask = 0, ans = 0, temp;
    cin>>n;
    temp = n;
    if(n == 0) return 1;
    while(temp!=0){
        mask = (mask << 1) | 1;
        temp = temp >> 1; 
    }
    ans = (~n) & mask; 
    cout<<mask<<endl<<ans;
    return 0;
}