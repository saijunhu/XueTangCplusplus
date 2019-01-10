//
// Created by Saijun Hu on 2019/1/9.
//

#include <iostream>
using namespace std;

const double pi = 3.14;

class Shape{
public:
    Shape(){}
    ~Shape(){}
    virtual double getArea() = 0;
    virtual double getPerim() = 0;
};

class Circle: public Shape{
public:
    Circle(double rad):radius(rad){}
    ~Circle(){}

    /*补充这两个函数*/
    double getArea();
    double getPerim();
private:
    double radius;
};

double Circle::getArea() {
    return pi*radius*radius;
}

double Circle::getPerim() {
    return 2*pi*radius;
}

int main() {
    double radius;
    cin >> radius;
    Circle c(radius);
    cout << c.getArea() << " " << c.getPerim() << endl;
}