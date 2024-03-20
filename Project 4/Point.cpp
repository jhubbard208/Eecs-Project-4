/**
 * Point.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * Will Sprague and Jack Hubbard
 * spraguew, jackhub
 *
 * Project 4 works with classes to represent shapes amd save images of those shapes in files.
 */

#include "Point.h"

// for the declaration of DIMENSION
#include "utility.h"

// TODO: implement two constructors, setX, getX, setY, getY, read, write, checkRange.
Point::Point() {
   
    x = 0;
    y = 0;
}
    
Point::Point(int xVal, int yVal) {

    x = checkRange(xVal);
    y = checkRange(yVal);
}

void Point::setX(int xVal) {
    
    x = checkRange(xVal);
    return;
}

int Point::getX() {
    
    return checkRange(x);
}

void Point::setY(int yVal) {
  
    y = checkRange(yVal);
    return;
}
    
int Point::getY() {
  
    return checkRange(y);
}

void Point::read(istream& ins) {
  
   char c1 = '(';
   char c2 = ',';
   char c3 = ')';
    x = checkRange(x);
    y = checkRange(y);

   ins >> c1 >> x >> c2 >> y >> c3;
    
    return;
}

void Point::write(ostream& outs) {
  
    outs << "(" << checkRange(x) << "," << checkRange(y) << ")";
    return;
}

int Point::checkRange(int val) {
    
   
    if(val < DIMENSION && val >= 0) {
       return val;
    }else if( val < 0) {
        return 0;
    }else{
        return DIMENSION -1;
    }
   
}


// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}
