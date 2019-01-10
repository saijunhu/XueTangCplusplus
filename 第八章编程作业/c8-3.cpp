//
// Created by Saijun Hu on 2019/1/9.
//

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

class Shape{
public:
    Shape() {}
    virtual ~Shape() {}
};

class Triangle: public Shape{
public:
    Triangle() {}
    ~Triangle() {}
};

class Rectangle: public Shape {
public:
    Rectangle() {}
    ~Rectangle() {}
};

/*用dynamic_cast类型转换操作符完成该函数*/
int getVertexCount(Shape * b){
    if(Triangle* t = dynamic_cast<Triangle*>(b)){
        return 3;
    }else if(Rectangle* r = dynamic_cast<Rectangle*>(b)){
        return 4;
    }else{ return 0;}
}

int main() {
    Shape s;
    cout << getVertexCount(&s) << endl;
    Triangle t;
    cout << getVertexCount(&t) << endl;
    Rectangle r;
    cout << getVertexCount(&r) << endl;
}