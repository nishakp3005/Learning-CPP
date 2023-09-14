#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    long r=0;     
        while(x){
         r=r*10+x%10; 
         x=x/10;    
        }
        if(r>INT_MAX || r<INT_MIN) return 0; 
        cout<<r;
        return int(r);
}