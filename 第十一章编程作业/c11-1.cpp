//
// Created by Saijun Hu on 2019/1/10.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    double d;
    cin>>d;
    //首先处理小数点后直接截断的方法,否则setprecision会进行四舍五入
    d=floor(d*pow(10,n))/pow(10,n);
    if(m==0 && n==0){cout<<0<<endl;}
    else if(n==0){//此种case下因为没有小数点，所以setw时无需加1
        cout<<setiosflags(ios_base::fixed)<<setprecision(n)\
                <<setw(m+n)<<setfill('0')<<d<<endl;
    }else {//否则有小数点，所以setw时要额外加1
        cout<<setiosflags(ios_base::fixed)<<setprecision(n)\
                <<setw(m+n+1)<<setfill('0')<<d<<endl;
    }

}