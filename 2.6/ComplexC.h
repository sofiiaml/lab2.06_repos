// ComplexC.h 
#pragma once
#include <string>
using namespace std;

class ComplexC {
public:
    class Pair
    {
    private:
        double first;
        double second;

    public:
        double getFirst() const { return first; }
        double getSecond() const { return second; }

        void setFirst(double a) { first = a; }
        void setSecond(double b) { second = b; }

        Pair();//��� ���������
        Pair(double a, double b);//�����������
        Pair(const Pair&);//���������

        Pair& operator=(const Pair& p);//���������
        friend Pair operator+(const Pair& first, const Pair& second);
        friend Pair operator*(const Pair& first, const Pair& second);
        operator string() const;

        Pair& operator ++();
        Pair& operator --();
        Pair operator++(int);
        Pair operator--(int);
        friend ostream& operator<<(ostream& out, const Pair& p);
        friend istream& operator>>(istream& in, Pair& p);
    };

    Pair pair;
public:
    ComplexC();
    ComplexC(double re, double im);
    ComplexC(const ComplexC&);

    double getRe() const;
    double getIm() const;
    void setRe(double re);
    void setIm(double im);

    ComplexC& operator=(const ComplexC& c);//���������
    operator string() const;

    ComplexC& operator ++();
    ComplexC& operator --();
    ComplexC operator++(int);
    ComplexC operator--(int);

    friend ostream& operator<<(ostream& out, const ComplexC& c);
    friend istream& operator>>(istream& in, ComplexC& c);

    friend ComplexC operator*(const ComplexC& first, const ComplexC& second);
    friend ComplexC operator-(const ComplexC& first, const ComplexC& second);
};
