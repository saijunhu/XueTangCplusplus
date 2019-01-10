//
// Created by Saijun Hu on 2019/1/8.
//
#include <iostream>
using namespace std;

class Integer {
private:
    int _num;
public:
//构造函数
    Integer(int num) {
        _num = num;
    }
    int get_num(){ return _num;}
//计算当前Integer 和 b之间的最大公约数
    int gcd(Integer b) {
        return gcd(_num,b.get_num());
    }
    int gcd(int a , int b);
};
int Integer::gcd(int a, int b) {
    int c=a%b;
    while(c!=0)
    {
        a=b;
        b=c;
        c=a%b;
    }
    return b;
}
int main(){
    int a, b;
    cin >> a >> b;
    Integer A(a);
    Integer B(b);
    cout << A.gcd(B) << endl;
    return 0;
}
