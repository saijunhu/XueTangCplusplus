//
// Created by Saijun Hu on 2019/1/9.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin>>n;
    int num;
    vector<int> nums;
    for (int i = 0; i < n; ++i) {
        cin>>num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    auto end_unique = unique(nums.begin(), nums.end());
    nums.erase(end_unique, nums.end());
    copy(nums.begin(),nums.end(), ostream_iterator<int>(cout, "\n"));
    return 0;
}