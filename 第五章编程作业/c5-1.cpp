//
// Created by Saijun Hu on 2019/1/8.
//

#include <iostream>
using namespace std;

class Yuebao
{
private:
    double _amount;
    static double profitRate;
public:
    static void setProfitRate(double rate);
/* Your code here! */
    Yuebao(double amount){_amount = amount;}
    Yuebao(){_amount =0;}

    void deposit(double amount);
    void withdraw(double amount);
    void addProfit();
    double getBalance();


};
void Yuebao::setProfitRate(double rate) { profitRate = rate;}
void Yuebao::deposit(double amount) {_amount += amount;}
void Yuebao::withdraw(double amount) {_amount -= amount;}
void Yuebao::addProfit(){
    double profit = _amount*profitRate;
    _amount += profit;
}
double Yuebao::getBalance() {
    return _amount;
}
double Yuebao::profitRate = 0;//don't forget this init line;


int main()
{
    int n;
    while(cin >> n)
    {
        double profitRate;
        cin >> profitRate;
        Yuebao::setProfitRate(profitRate);//设定鱼额宝的利率
        Yuebao y(0); //新建鱼额宝账户，余额初始化为0
        int operation;//接受输入判断是存还是取
        double amount;//接受输入存取金额
        for (int i = 0; i < n; ++i)
        {
            y.addProfit();//加入前一天余额产生的利息
            cin >> operation >> amount;
            if (operation == 0)
                y.deposit(amount);//存入金额
            else
                y.withdraw(amount);//取出金额
        }
        cout << y.getBalance() << endl;//输出最终账户余额
    }
    return 0;
}