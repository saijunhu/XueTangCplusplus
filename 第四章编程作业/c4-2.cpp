//
// Created by Saijun Hu on 2019/1/8.
//

#include <iostream>
using namespace std;

class Integer{
private:
    int _num;
//getLength()函数获取_num长度
    int getLength(){
        string s = to_string(_num);
        return int(s.length());
    }
public:
//Integer类构造函数
    Integer(int num){
        _num = num;
    }
//反转_num
    int inversed(){
        int i = _num;
        int m=0;//m is the auxiliary number
        while(i>0){
            m= m*10 + i%10;
            i  = i/10;
        }
        return m;
    }
};

int main() {
    int n;
    cin >> n;
    Integer integer(n);
    cout << integer.inversed() << endl;
    return 0;
}