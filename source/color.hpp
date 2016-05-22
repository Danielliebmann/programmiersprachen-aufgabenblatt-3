
#ifndef COLOR_HPP
#define COLOR_HPP
#include <iostream>
using namespace std;
//COnstruct Color aus R,G,B
struct Color{
Color():r{0},g{0},b{0}{}
//CASE: Wenn mindestens einer der Operanden Wert hat.(r)
Color(float r):
 r{r},g{r},b{r}{
  if (r > 1 || r < 0){
   throw out_of_range("Wert nur 0 bis 1!");}
}
//CASE: Wenn r, g, oder b den Wert 0 oder 1 haben! (mind. 1)
Color(float r, float g, float b):
 r{r},g{g},b{b}{
  if (r > 1 || r < 0){//R
   throw out_of_range("Wert nur 0 bis 1!");}
  if (g > 1 || g < 0){//G
   throw out_of_range("Wert nur 0 bis 1!");}
  if (b > 1 || b < 0){//B
   throw out_of_range("Wert nur 0 bis 1!");}
}
//Deklaration
 float r;
 float g;
 float b;
};

#endif
