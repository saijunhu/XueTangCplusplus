//
// Created by Saijun Hu on 2019/1/5.
//
#include <iostream>

using namespace std;
int fabonacci(int);

int main(){
    int n;
    cin>>n;
    cout<<fabonacci(n)<<endl;
    return 0;
}

int fabonacci(int n){
    if (n==0 || n==1){
        return 1;
    }else{
        return fabonacci(n-1) + fabonacci(n-2);
    }
}