//
// Created by Saijun Hu on 2019/1/8.
//
//注意：此题并没有AC，因为我实在不知道一元二次方程有那么多情况，，，
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
class Equation{
private:
    int _a, _b, _c;
public:
    Equation(int a, int b, int c){
        _a = a;
        _b = b;
        _c = c;
    }
    void solve(){
        float delta = _b*_b - 4*_a*_c;
        if(delta>0){
            cout<<"1"<<endl;
            float x1 = (-_b+sqrt(delta))/2*_a;
            float x2 = (-_b-sqrt(delta))/2*_a;
            if (x1 > x2) {
                cout << fixed << setprecision(2) << x2 << " " <<setprecision(2)<< x1 << endl;
            } else {
                cout << fixed << setprecision(2) << x1 << " " <<setprecision(2)<< x2 << endl;
            }
        }else if(delta==0){
            cout<<"2"<<endl;
            cout<<setprecision(2)<<(-_b)/2*_a<<endl;
        }else{
            cout<<"4"<<endl;
        }
    }
};
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    Equation tmp(a, b, c);
    tmp.solve();
    return 0;
}