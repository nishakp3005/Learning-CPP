#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i>j) cout<<"  ";
            else cout<<i+1<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}