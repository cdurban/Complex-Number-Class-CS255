/* 
 * Assignment:  Project 3
 * File:        ComplexNumber.cpp
 * Author:      Chase Urban
 * Due:         February 10th, 2020
 *
 * Implementation file for ComplexNumber.h
 */
#include <cstdlib>
#include <cmath>

#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(double real, double imag) {
    a = real;
    b = imag;
}

double ComplexNumber::getReal() const{
    return a;
}

double ComplexNumber::getImaginary() const{
    return b;
}

double ComplexNumber::magnitude() const{
    return sqrt(pow(a,2) + pow(b,2));
}

ComplexNumber ComplexNumber::operator +(const ComplexNumber &c)const{
    return ComplexNumber(a+c.a, b+c.b);
}

ComplexNumber ComplexNumber::operator -(const ComplexNumber &c)const{
    return ComplexNumber(a-c.a, b-c.b);
}

ComplexNumber ComplexNumber::operator *(const ComplexNumber &c)const{
    return ComplexNumber((a * c.a - b * c.b),(a * c.b + b * c.a));
}

ComplexNumber ComplexNumber::operator /(const ComplexNumber &c)const{
    return ComplexNumber(((a*c.a+b*c.b)/(pow(c.a,2)+pow(c.b,2))),
            ((b*c.a-a*c.b)/(pow(c.a,2)+pow(c.b,2))));
}

bool ComplexNumber::operator ==(const ComplexNumber &c)const{
    return ((a == c.a) && (b == c.b));
}

std::ostream& operator <<(std::ostream &out, const ComplexNumber &c){
    if (c.a != 0){
        out << c.a;
        if (c.b > 0)
            out << "+" << c.b << "i";
        else if (c.b < 0)
            out << c.b << "i";
    }
    else{
        if(c.b != 0)  
            out << c.b << "i";
        else
            out << "0";
    }
    return out;
}

std::istream& operator >>(std::istream &in, ComplexNumber &c){
    char cur;
    in >> c.a >> cur >> c.b >> cur;
}