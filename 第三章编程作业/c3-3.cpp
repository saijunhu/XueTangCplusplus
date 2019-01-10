//
// Created by Saijun Hu on 2019/1/8.
//

#include <iostream>
using namespace std;


bool isTargetNum(int);

int main(){
    int num;
    cin>>num;

    if(isTargetNum(num) == true){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}

bool isTargetNum(int num){
    if(num==1 || num==0) return false;
    while(num%2==0) num/=2;
    while(num%3==0) num/=3;
    while(num%5==0) num/=5;
    return (num==1)? true : false;

}