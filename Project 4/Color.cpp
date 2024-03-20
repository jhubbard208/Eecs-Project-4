/**
 * Color.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * Will Sprague and Jack Hubbard
 * spraguew, jackhub
 * 
 *
 * <#Description#>
 */
const int range = 255;
#include "Color.h"

// TODO: implement first checkRange, then two constructors, setRed, getRed,
//       setGreen, getGreen, setBlue, getBlue, read, write.

int Color::checkRange(int val) {
    
   
    if(val <= range && val >= 0) {
       return val;
    }else if( val < 0) {
        return 0;
    }else{
        return range;
    }
   
}
Color::Color(){
    red = 0;
    green = 0;
    blue = 0;
}
Color::Color(int redVal, int greenVal, int blueVal){
    red = checkRange(redVal);
    green = checkRange(greenVal);
    blue = checkRange(blueVal);
}
void Color::setRed(int redVal){
    red = checkRange(redVal);
}
void Color::setGreen(int greenVal){
    green = checkRange(greenVal);
}
void Color::setBlue(int blueVal){
    blue = checkRange(blueVal);
}
int Color::getRed(){
    return checkRange(red);
}
int Color::getBlue(){
    return checkRange(blue);
}

int Color::getGreen(){
    return checkRange(green);
}
void Color::read(istream& ins) {
   string c1 = " ";
   string c2 = " ";
    red = checkRange(red);
    blue = checkRange(blue);
    green = checkRange(green);
   ins >> red >> c1 >> green >> c2 >> blue;
    
    return;
}
void Color::write(ostream& outs) {
  
    outs << checkRange(red) << " " << checkRange(green) << " "
    << checkRange(blue) << endl;
    return;
}


// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins, Color& color)
{
   color.read(ins);
   return ins;
}

ostream& operator << (ostream& outs, Color color)
{
   color.write(outs);
   return outs;
}
