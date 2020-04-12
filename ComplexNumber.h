/* 
 * Assignment:  Project 3
 * File:        ComplexNumber.h
 * Author:      Chase Urban
 * Due:         February 10th, 2020
 *
 * Header file for ComplexNumber.h
 */

#include <iostream>

#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

class ComplexNumber {
private:
    /*
     * a: The real portion of the Complex Number.
     * b: The imaginary portion of the Complex Number.
     */
    double a, b;
    
public:
    /*
     * Constructor with default parameters.
     */
    ComplexNumber(double real = 0, double imag = 0);
    
    
    /*
     * Postcondition : The real portion of the Complex Number.
     */
    double getReal()const;
    
    /*
     * Postcondition : The imaginary portion of the Complex Number.
     */
    double getImaginary()const;
    
    
    /*
     * Postcondition: The magnitude of the Complex Number, defined as the 
     * square root of the sum of a squared and b squared.
     */
    double magnitude()const;
    
    
    /*
     * Precondition: A second ComplexNumber
     * Postcondition: A ComplexNumber representing the sum of the two 
     * ComplexNumbers
     */
    ComplexNumber operator +(const ComplexNumber &c)const;
    
    /*
     * Precondition: A second ComplexNumber
     * Postcondition: A ComplexNumber representing the difference of the 
     * two ComplexNumbers
     */
    ComplexNumber operator -(const ComplexNumber &c)const;
    
    /*
     * Precondition: A second ComplexNumber
     * Postcondition: A ComplexNumber representing the product of the two 
     * ComplexNumbers
     */
    ComplexNumber operator *(const ComplexNumber &c)const;
    
    /*
     * Precondition: A second ComplexNumber
     * Postcondition: A ComplexNumber representing the quotient of the two 
     * ComplexNumbers
     */
    ComplexNumber operator /(const ComplexNumber &c)const;
    
    
    /*
     * Precondition: A second ComplexNumber
     * Postcondition: A boolean representing whether the two ComplexNumbers
     * are equal
     */
    bool operator ==(const ComplexNumber &c)const;
    
    
    /*
     * Overload of the << operator for text output of ComplexNumbers
     */
    friend std::ostream& operator <<(std::ostream &out, 
    const ComplexNumber &c);
    
    /*
     * Overload of the >> operator for text input of ComplexNumbers
     */
    friend std::istream& operator >>(std::istream &in, ComplexNumber &c); 
    
};
#endif /* COMPLEXNUMBER_H */