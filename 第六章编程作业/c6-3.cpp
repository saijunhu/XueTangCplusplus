//
// Created by Saijun Hu on 2019/1/8.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
//该算法可以采用快速排序的思想优化，不过排序是最简单的实现了吧，
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int> nums(n,0);
    for (int i = 0; i < n; ++i) {
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());
    cout<<nums[k-1]<<endl;
    return 0;
}


