#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,rem, num = 0, i = 0;
    cin>>n;
    while(n!=0){
        rem = n%2;
        num = (pow(10, i) * rem) + num;
        n = n/2;
        i++;
    }
    cout<<num;
    return 0;
}
