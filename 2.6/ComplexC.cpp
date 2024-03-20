//ComplexC.cpp
#include "ComplexC.h"
#include <iostream>
using namespace std;
ComplexC::ComplexC() : pair(0, 0) {}
ComplexC::ComplexC(double re, double im) : pair(re, im) {}
ComplexC::ComplexC(const ComplexC& c) {
    *this = c;
}

ComplexC& ComplexC::operator=(const ComplexC& c) {
    pair = c.pair;
    return *this;
}
ComplexC operator*(const ComplexC& first, const ComplexC& second) {
    double re = first.pair.getFirst() * second.pair.getFirst() - first.pair.getSecond() * second.pair.getSecond();
    double im = first.pair.getFirst() * second.pair.getSecond() + first.pair.getSecond() * second.pair.getFirst();
    return ComplexC(re, im);
}
ComplexC operator-(const ComplexC& first, const ComplexC& second) {
    double re = first.pair.getFirst() - second.pair.getFirst();
    double im = first.pair.getSecond() - second.pair.getSecond();
    return ComplexC(re, im);
}
double ComplexC::getRe() const { return pair.getFirst(); }

double ComplexC::getIm() const { return pair.getSecond(); }

void ComplexC::setRe(double re) { pair.setFirst(re); }

void ComplexC::setIm(double im) { pair.setSecond(im); }

ComplexC::operator string() const {
    return "(" + to_string(getRe()) + " + " + to_string(getIm()) + "i)";
}
ostream& operator<<(ostream& out, const ComplexC& c) {
    out << string(c);
    return out;
}
istream& operator>>(istream& in, ComplexC& c) {
    cout << "Enter the real part: ";
    double re;
    in >> re;
    cout << "Enter the imaginary part: ";
    double im;
    in >> im;
    return in;
}
ComplexC& ComplexC::operator ++() {
    pair++;
    return *this;
}
ComplexC& ComplexC::operator --() {
    pair--;
    return *this;
}
ComplexC ComplexC::operator++(int) {
    ComplexC tmp = *this;
    ++*this;
    return tmp;
}
ComplexC ComplexC::operator--(int) {
    ComplexC tmp = *this;
    --*this;
    return tmp;
}


ComplexC::Pair::Pair() : first(0), second(0) {}

ComplexC::Pair::Pair(double a, double b) : first(a), second(b) {}

ComplexC::Pair::Pair(const Pair& p) {
    *this = p;
}
ComplexC::Pair& ComplexC::Pair::operator=(const ComplexC::Pair& p) {
    first = p.first;
    second = p.second;
    return *this;
}
ComplexC::Pair operator+(const ComplexC::Pair& first, const ComplexC::Pair& second) {
    return ComplexC::Pair(first.getFirst() + second.getFirst(), first.getSecond() + second.getSecond());
}
ComplexC::Pair operator*(const ComplexC::Pair& first, const ComplexC::Pair& second) {
    return ComplexC::Pair(first.getFirst() * second.getFirst(), first.getSecond() * second.getSecond());
}
ComplexC::Pair::operator string() const {
    return "(" + to_string(first) + ", " + to_string(second) + ")";
}
ostream& operator<<(ostream& out, const ComplexC::Pair& p) {
    out << string(p);
    return out;
}
istream& operator>>(istream& in, ComplexC::Pair& p) {
    double first, second;
    cout << "Enter the first value: ";in >> first;
    cout << "Enter the second value: ";in >> second;
    return in;
}
ComplexC::Pair& ComplexC::Pair::operator ++() {
    first++;second++;
    return *this;
}
ComplexC::Pair& ComplexC::Pair::operator --() {
    first--;second--;
    return *this;
}
ComplexC::Pair ComplexC::Pair::operator++(int) {
    Pair tmp = *this;
    ++*this;
    return tmp;
}
ComplexC::Pair ComplexC::Pair::operator--(int) {
    Pair tmp = *this;
    --(*this);
    return tmp;
}