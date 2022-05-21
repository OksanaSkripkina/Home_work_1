

#include <iostream>
#include "Fractions.h"
using namespace std;
int main()
{
    Fractions b1(2, 3);
    b1.print();
    cout << endl;
    Fractions b2(1, 2);
    b2.print();
    cout << endl;
    Fractions b3 = b1.add(b1, b2);
    cout << "add= ";
    b3.print();
    cout << endl;
    Fractions v1(4, 7);
    v1.print();
    cout << endl;
    Fractions v2(2, 3);
    v2.print();
    cout << endl;
    Fractions v3=v3.sub(v1, v2);
    cout<<"sub= ";
    v3.print();
    cout << endl;
    Fractions d1(2, 3);
    d1.print();
    cout << endl;
    Fractions d2(1, 2);
    d2.print();
    cout << endl;
    Fractions d3 = d1.mult(d1, d2);
    cout << "mult= ";
    d3.print();
    cout << endl;
    Fractions a1(1, 6);
    a1.print();
    cout << endl;
    Fractions a2(1, 3);
    a2.print();
    cout << endl;
    Fractions a3 = a1.div(a1, a2);
    cout << "div= ";
    a3.print();

}

