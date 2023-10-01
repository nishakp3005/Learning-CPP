#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    int fromBegin = 1;
    int fromLast = 1;
    vector<int> res(n, 1);

    for (int i = 0; i < n; i++)
    {
        res[i] *= fromBegin;
        fromBegin *= nums[i];
        res[n - 1 - i] *= fromLast;
        fromLast *= nums[n - 1 - i];
    }
    return 0;
}