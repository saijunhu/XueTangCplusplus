//
// Created by Saijun Hu on 2019/1/9.
//

#include <iostream>
#include <string>
using namespace std;

template<class T, int MAX = 1000>
class Stack
{
private:
    T list[MAX + 1];
    int top;
public:
    Stack();
    void push(const T &item);//将item压栈
    T pop();//将栈顶元素弹出栈
    const T & peek() const;//访问栈顶元素
    bool isEmpty() const;//判断是否栈空
};

template<class T, int MAX >
Stack<T,MAX>::Stack() {top=-1;}

template<class T, int MAX>
void Stack<T,MAX>::push(const T &item) {
    list[++top] = item;
}

template<class T, int MAX>
T Stack<T,MAX>::pop() {
    return list[top--];
}

template<class T, int MAX>
const T& Stack<T,MAX>::peek() const {
    return list[top];
}

template<class T, int MAX>
bool Stack<T,MAX>::isEmpty() const {
    return (top == -1);//空的时候返回true
}

int main(){
    Stack<char> stack;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); ++i) {
        switch (s[i]){
            case '(':
                stack.push(s[i]);
                break;
            case ')':
                if(stack.isEmpty()){
                    cout<<"No"<<endl;
                    return 0;
                }else{
                    stack.pop();
                }
                break;
            default:break;
        }
    }
    if(stack.isEmpty()){ cout<<"Yes"<<endl; }
    else{ cout<<"No"<<endl; }
    return 0;
}