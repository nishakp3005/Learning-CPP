#include<bits/stdc++.h>
using namespace std;

bool test(int x){
    if(x<0|| (x!=0 && x%10 == 0)) return false;
    int sum=0;
    while(x>sum){
        sum = sum*10+x%10;
        x = x/10;
    }
    return (x==sum)||(x==sum/10);
}

int main(){
    int x;
    cin>>x;
    cout<<test(x)<<endl;;
    return 0;
}