//
// Created by Saijun Hu on 2019/1/5.
//
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool evaluate(int[]);


int main(){
    int nums[3];
    int value;
    int i=0;
    while(cin>>value){
        nums[i] =  value;
        i++;
        if(i==3){
            i=0;
            if(evaluate(nums)){
                cout<<"True"<<endl;
            }else{
                cout<<"False"<<endl;
            }
            break;
        }
    }
    return 0;

}

bool evaluate(int nums[]){
    return (pow(nums[0],2) + pow(nums[1],2))  == pow(nums[2],2) || (pow(nums[1],2) + \
    pow(nums[2],2))  == pow(nums[0],2) || (pow(nums[0],2) + pow(nums[2],2))  == pow(nums[1],2);
}

