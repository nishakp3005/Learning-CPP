#include<bits/stdc++.h>
using namespace std;
 
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int a;
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j >= 1; j--)
        {
            if(i<j) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}