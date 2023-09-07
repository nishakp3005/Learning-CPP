#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char c;
    cin>>n;
    for (int  i = n-1; i >= 0; i--)
    {
        for (int j = 0; j<=i ; j++)
        {
            c = char(65+j);
            cout<<c<<" ";
        }
        cout<<endl
    }
    
    return 0;
}