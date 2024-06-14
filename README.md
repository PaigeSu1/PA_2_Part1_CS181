Name of Project: Programming Assignment #2 Part 1 (PA2 Part 1)

Complete Assignment in C++ using Classes 

Suppose two-line segments intersect. The two endpoints for the first line segment are (x1, 
y1) and (x2, y2) and for the second line segment are (x3, y3) and (x4, y4), as shown,

![image](https://github.com/PaigeSu1/PA_2_Part1_CS181/assets/164946572/5ca6050a-30b2-488a-b688-4920d435ef62)

Here, two lines intersect in (a and b), and two lines are parallel in (c). The intersecting point 
of the two lines can be found by solving the following linear equation:

![image](https://github.com/PaigeSu1/PA_2_Part1_CS181/assets/164946572/eb27689e-9c16-4892-851c-838c7a6c715b)

This linear equation can be solved using Cramer’s rule:

![image](https://github.com/PaigeSu1/PA_2_Part1_CS181/assets/164946572/b450e7dd-bc9d-454a-98f0-a4c499fd89db)

Where, 

![image](https://github.com/PaigeSu1/PA_2_Part1_CS181/assets/164946572/2b329de2-458c-4a06-8df2-13fc88623339)

If ad - bc is 0, report that “The equation has no solution.” The two lines are parallel if the 
equation has no solutions (Figure c). 

Design a class named LinearEquation for a 2 * 2 system of linear equations-

      ▪ Private data fields a, b, c, d, e, and f.
      ▪ A constructor with the arguments for a, b, c, d, e, and f.
      ▪ Six get functions for a, b, c, d, e, and f.
      ▪ A function named isSolvable() that returns true if ad - bc is not 0.
      ▪ Functions getX() and getY() that return the solution for the equation.
      Write a program that prompts the user to enter these four endpoints and displays the 
      intersecting point.
      
Note: You will have three files: mainPart1.CPP (Ask the user to enter 4 end-points of 2 
lines), LinearEquation.h (create class to define the constructor and other member functions 
header), and LinearEquation.CPP (declare constructor and public member functions 
outside the class).


Smaple output: 

(User testing Data is indicated by *)

Part-1:
1st run:

    Enter x1, y1, x2, y2, x3, y3, x4, y4:2* 2* 5* -1.0* 4.0* 2.0* -1.0* -2.0*
    The intersecting point is at (2.88889, 1.1111).

2nd run:

    Enter x1, y1, x2, y2, x3, y3, x4, y4:2* 2* 7* 6.0* 4.0* 2.0* -1.0* -2.0*
    The two lines are parallel.



*This was created using CLion IDE
