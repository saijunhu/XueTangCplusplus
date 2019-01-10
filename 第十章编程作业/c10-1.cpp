//
// Created by Saijun Hu on 2019/1/9.
//
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    string word;
    map<string, int> voca;
    while(1){
        cin>>word;
        voca[word]++;
        if(word == "QUIT"){
            break;//这个地方特别注意下，输入QUIT时不能输出0，所以要这样写
        }
        (voca[word]==1)? cout<<0<<endl : cout<<voca[word]-1<<endl;
    }
    return 0;
}
