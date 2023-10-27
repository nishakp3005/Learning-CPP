#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    if (n == 0) {
        cout << 0; // Special case for n = 0
    } else {
        vector<int> binary;
        
        while (n > 0) {
            binary.push_back(n % 2);
            n = n / 2;
        }
        
        for (int i = binary.size() - 1; i >= 0; i--) {
            cout << binary[i];
        }
    }
    return 0;
}
