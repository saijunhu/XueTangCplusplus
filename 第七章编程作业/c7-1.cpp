//
// Created by Saijun Hu on 2019/1/8.
//

#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    string userName;
public:
    Account(){};
    Account( string name );
    void  PrintUserName();
};
Account::Account(string name) {userName = name;}
void Account::PrintUserName() {cout<<userName<<endl;}

class CreditAccount : public Account
{
public:
    CreditAccount( string name, int credit);
    void PrintInfo();
private:
    int credit;
};

CreditAccount::CreditAccount(string name, int credit): Account(name), credit(credit) {}
void CreditAccount::PrintInfo() {
    PrintUserName();
    cout<<credit;
}
//请实现Account构造函数Account(char *name)
//请实现Account的PrintUserName()函数
//请实现CreditAccount类的构造函数CreditAccount(char* name, long number)
//请实现CreditAccount类的PrintInfo()函数

int main()
{
    CreditAccount a("I Love CPP", 10000);
    a.PrintInfo();
    return 0;
}