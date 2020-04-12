/* 
 * Assignment:  Project 3
 * File:        main.cpp
 * Author:      Chase Urban
 * Due:         February 10th, 2020
 *
 * Main function to test out operators and functions of ComplexNumber class
 */

#include <cstdlib>
#include <iostream>

#include "ComplexNumber.h"

using namespace std;
namespace ns{
    ComplexNumber c3(4,-3);
}

int main(int argc, char** argv) {
    ComplexNumber c1(2,3), c2(5,-6);
    //Tests the addition operator
    cout << c1 << " + " << c2 << " = " << c1 + c2 << endl;
    //Tests the subtraction operator
    cout << c1 << " - " << c2 << " = " << c1 - c2 << endl << endl;
    
    ComplexNumber c3(4,-3);
    //Tests the magnitude function
    cout << "Magnitude of " << c3 << " is " << c3.magnitude() << "\n\n";
    
    //Tests the == operator with equal operands
    cout << c3 << " == " << ns::c3 << " ? ";
    if(c3 == ns::c3) 
        cout << "true" << endl; 
    else 
        cout << "false" << endl;
    //Tests the == operator with unequal operands
    cout << c2 << " == " << ns::c3 << " ? ";
    if(c2 == ns::c3) 
        cout << "true" << endl << endl; 
    else 
        cout << "false" << endl << endl;
    
    ComplexNumber c4(2,3), c5(3,-2);
    //Tests the multiplication operator
    cout << c4 << " * " << c5 << " = " << c4 * c5 << endl << endl;
    
    ComplexNumber c6(1,2), c7(3,-4);
    //Tests the division operator
    cout << c6 << " / " << c7 << " = " << c6 / c7 << endl << endl;
    
    ComplexNumber c8, c9, c10, c11, c12;
    
    cout << "Please enter five imaginary number in the form a+bi : ";
    //Tests the >> operator, intended to be tested with zeroes, negatives,
    //and 
    cin >> c8 >> c9 >> c10 >> c11 >> c12;
    
    cout << "c8 = " << c8 << " c9 = " << c9 << " c10 = " << c10 
            << " c11 = " << c11 << " c12 = " << c12;
          
    return 0;
}