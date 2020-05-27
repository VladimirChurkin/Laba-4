#include <iostream>
#include "Header.h"
using namespace std;

int main() {
    Point a, b;
    Point* c = new Point();
    a.SetX(5);
    b.SetX(9);
    a.GetX() == b.GetX()? cout << "+" << endl : cout << "-" << endl;
    c->SetX(12);
    cout << a.GetX()+b.GetX();
    delete c;
    return 0;
}
