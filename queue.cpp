#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int n = 0;
    while(n>=0){
        cin>>n;
        q.push(n);
    }
    reverseQueue(q);
    while(!q.empty()) {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}