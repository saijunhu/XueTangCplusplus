//
// Created by Saijun Hu on 2019/1/9.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s, ss;
    vector<string> strs;
    cin>>s>>ss;
    int ls = s.length();
    int lss = ss.length();
    for (int i = 0; i <= ls-lss; ++i) {
        strs.push_back(s.substr(i,lss));
    }
    cout<<count(strs.begin(), strs.end(),ss)<<endl;
    return 0;
}