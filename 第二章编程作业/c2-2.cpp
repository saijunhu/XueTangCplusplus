//
// Created by Saijun Hu on 2018/12/27.
//


#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main(){

    char nums[11] = "0000000000";
    string s;
    int res =0;
    cin>>s;
    int l = s.length();
    for(int i = l-1, j = 9;i>-1;i--,j--){
        nums[j] = s[i];
    }
    for(int i = 0; i<10;i++){
        int c  = static_cast<int>(nums[i]) - 48;
        res = res + c* pow(2,9-i);
    }
    cout<<res;
    return 0;
}