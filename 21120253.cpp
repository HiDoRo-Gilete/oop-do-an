#include<iostream>
#include"Circle.h"
using namespace std;
int main()
{
    Circle c(5);
    Circle d(2.12);
    cout << c.Diameter() << " " << c.Area() << endl;
    cout << d.Diameter() << " " << d.Area() << endl;
}
