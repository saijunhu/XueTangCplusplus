//
// Created by Saijun Hu on 2019/1/8.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> get_subsequences(const string);
bool is_target_string(string);

int main(){
    string s;
    cin>>s;
    int count=0;
    vector<string> subsequences = get_subsequences(s);
    for(string s: subsequences){
        if(is_target_string(s)) count++;
    }
    cout<<count<<endl;
    return 0;
}

vector<string> get_subsequences(const string str){
    long len = str.length();
    long num = 1<<str.length();//将1左移len位，求2的len次幂。
    vector<string> res;
    for (int i = 1; i <num ; ++i) {
        string ss;
        for (int j = 0; j < len; ++j) {
            if(i&(1<<j)) ss.push_back(str[j]);
        }
        res.push_back(ss);
    }
    return res;
}

bool is_target_string(const string str){
    long len = str.length();
    int i=0;
    long j=len-1;
    while(i<=j){
        if(str[i] != str[j]) return false;
        i++;j--;
    }
    return true;

}
