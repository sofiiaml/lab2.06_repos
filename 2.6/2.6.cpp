//2.6.cpp
#include <iostream>
#include "ComplexC.h"

using namespace std;

int main() {
    ComplexC::Pair p1(2.0, 3.0);
    ComplexC::Pair p2(4, 5);
    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;
    double first, second;
    cout << "Enter the first value: ";cin >> first;
    cout << "Enter the second value: ";cin >> second;
    ComplexC::Pair p3 = ComplexC::Pair(first, second) * p2;
    ComplexC::Pair p4 = ComplexC::Pair(first, second) + p2;
    cout << "Result of multiplication (Pair): " << p3 << endl;
    cout << "Result of addition (Pair): " << p4 << endl;
    cout << "p1++: " << p1++ << endl;
    cout << "p1--: " << p1-- << endl;
    cout << "++p2: " << ++p2 << endl;
    cout << "--p2: " << --p2 << endl;

    ComplexC c1(2, 3);
    ComplexC c2(4, 5);
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    ComplexC c3 = c1 * c2;
    ComplexC c4 = c1 - c2;

    cout << "Result of multiplication (Complex): " << c3 << endl;
    cout << "Result of subtraction (Complex): " << c4 << endl;

    cout << "c1++: " << c1++ << endl;
    cout << "c1--: " << c1-- << endl;
    cout << "++c2: " << ++c2 << endl;
    cout << "--c2: " << --c2 << endl;
    return 0;
}
