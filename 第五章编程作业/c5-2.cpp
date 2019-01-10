//
// Created by Saijun Hu on 2019/1/8.
//

#include <iostream>
using namespace std;

class Mouse{
/* Your code here! */
public:
    static int num;
    Mouse(){num++;}
    Mouse(Mouse& b){num++;}
    ~Mouse(){num--;}
};

void fn(Mouse m);
int Mouse::num = 0;
int main()
{
    Mouse::num = 0;
    Mouse a;
    cout << Mouse::num << endl;
    Mouse b(a);
    cout << Mouse::num << endl;
    for (int i = 0; i < 10; ++i)
    {
        Mouse x;
        cout << Mouse::num << endl;
    }
    fn(a);
    cout << Mouse::num << endl;
    return 0;
}

void fn(Mouse m)
{
    cout << Mouse::num << endl;
    Mouse n(m);
    cout << Mouse::num << endl;
}