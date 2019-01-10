//
// Created by Saijun Hu on 2019/1/8.
//

#include <iostream>
using namespace std;

int max_subarray(int[], int);
int main(){
    int len;
    cin>>len;
    int nums[len];
    for (int i = 0; i < len; ++i) {
        cin>>nums[i];
    }

    cout<<max_subarray(nums, len);
    return 0;
}

int max_subarray(int nums[], int len) {
    //dp[i]表示以i为子数组下标的最大和，求出dp后遍历找出最大值即可找见maxsubarray.
    int max =nums[0];
    int dp = nums[0];
    for (int i = 1; i < len; i++) {
        if (dp <= 0) {
            dp = nums[i];
        } else {
            dp += nums[i];
        }
        if (max < dp) max = dp;
    }
    return max;
}
