//This is My Class file
// How to make a class of function calls
// this will being making of math calling functions

#ifndef PA2_PART1_LINEAREQUATION_H
#define PA2_PART1_LINEAREQUATION_H


class LinearEquation
{
private:
    double a, b, c, d, e, f;

public:
    LinearEquation(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);

    double getA() const; // very important to have the word const at the end so nothing changes
    double getB() const;
    double getC() const;
    double getD() const;
    double getE() const;
    double getF() const;



    bool isSolvable() const;

    double getX();
    double getY() const;

    double X;
}; //sad face


#endif //PA2_PART1_LINEAREQUATION_H
