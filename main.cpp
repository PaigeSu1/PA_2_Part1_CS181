/*
# Author: Paige Su
# BannerID: 001395655
# Course: CS 181
# Assignment: PA2
# Date Assigned: Friday, January 26, 2024
# Date/Time Due: Friday, February 9, 2024 -- 11:55 pm
# Description: This program will exercise Object-Oriented concepts with C++.
# Certification of Authenticity:
 I certify that this assignment is entirely my own work
*/

//Planing out Part1
/* if two lines intersect then it both its segments also intersect.
 *
 * When two lines intersect they are at point (a, b) resenting the (x,y values)
 *  Meanwhile a parallel line just has a point that is located anywhere on lines that do not intersect each other.
 *
 * How to solve for the intersecting point of two lines using Cramer's rule
 *
 * intersection formula's
 * (y1-y2)x - (x1-x2)y = (y1-y2)x1 - (x1 - x2)y1
 *
 * (y3-y4)x - (x3 - x4)y = (y3 - y4)x3 - (x3-x4)y3
 *
 * Cramer's rule with each non x, y letter resenting a point value
 * Formulas;
 * ax + by = e
 * cx + dy = f
 *
 * x = ed - bf / ad - bc
 *
 * y = af - ec / ad - bc
 *
 * where:
 * a = y1 - y2
 * b = x2 - x1
 * c = y3 - y4
 * d = x4 - x3
 * e = x2 * y1 - x1 * y2
 * f = x4 * y3 - x3 * y4
 *
 * if ad-bc is 0, return "The equation has no solution, the two lines are parallel."
 *
 * Class LinearEquation for 2*2
 * private class var ; a, b, c, d, e, f
 * constructor with all six arguments (scope resolution operator syntax is very important here
 *
 * Function isSolvable() returns true if ad-bc is !- 0 [Bool]
 *         //Math
 * GetX()  x = ed - bf / ad - bc
 * GetY()  y = af - ec / ad - bc
 *
 * Program will ask for user input of four endpoints and display the result of the intersecting point.
 *
 */


//code starts here

#include <iostream>
#include "LinearEquation.h"
using namespace std;

int main()
{
    //Declare all the line segment variables (as doubles)
    double x1, y1, x2, y2, x3, y3, x4, y4 ;

    //Ask for user input
    cout << "Enter the end point values for the first line segment in (x1 y1 x2 y2 x3 y3 x4 y4 ): " << endl;
    //store the user data
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    //cout << "Enter the end point values for the second line segment in (x3 y3 x4 y4): " << endl;
    //cin >> x3 >> y3 >> x4 >> y4 ;

    //Make a constructor to past in all the values that are needed from an outside class
    //The object
    LinearEquation equation(x1, y1, x2, y2, x3, y3, x4, y4);

    if(equation.isSolvable()){
        cout << "The intersecting point is :: " << "( " << equation.getX() << " , " << equation.getY() << " )" << endl;
    } else {
        cout << "The equation has no solutions. Thus the two lines are parallel. " << endl;
    }
    return 0;

} //Main function ending brace

