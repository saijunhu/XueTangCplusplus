//
// Created by Saijun Hu on 2018/12/27.
//

/*C2-3实心菱形  (100 满分)

题目描述
        打印 n 阶实心菱形

输入描述
        输入一个整数n，n<=10

输出描述
        输出 n 阶实心菱形 ， 占 2*n-1 行

*/
//
// Created by Saijun Hu on 2019/1/5.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin>>n;
    int numsinrow=1;
    int halfheight=(2*n-1)/2;
    for(int i =0; i< halfheight;i++){

        for(int l=0;l<abs(halfheight-i);l++) cout<<" ";
        for(int k =0;k<numsinrow;k++){
            cout<<'*';
        }
        numsinrow+=2;

        cout<<endl;
    }
    for(int i =halfheight; i>-1 ;i--){

        for(int l=0;l<abs(halfheight-i);l++) cout<<" ";
        for(int k =0;k<numsinrow;k++){
            cout<<'*';
        }
        numsinrow-=2;
        cout<<endl;
    }
    return 0;

}