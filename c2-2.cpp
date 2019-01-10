//
// Created by Saijun Hu on 2018/12/27.
//
//题目描述
//已知一个只包含 0 和 1 的二进制数，长度不大于 10 ，将其转换为十进制并输出。
//
//输入描述
//输入一个二进制整数n，其长度不大于10
//
//输出描述
//输出转换后的十进制数， 占一行
//
//样例输入
//110
//
//样例输出
//6

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    cout<<"please input the binary num"<<endl;
    int num;
    cin>>num;
    string s = to_string(num);
    char* c = (char*)s.c_str();
    for (int i = 0; i < c; ++i) {

    }
    cout<<c<<endl; // 1e

}