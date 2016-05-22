
#include "circle.hpp"
#include <cmath>
#define M_PI   3.14159265358979323846 

Circle::Circle(float rad):
rad_{rad}{}
Circle::Circle():
rad_{50}{}

//Setter-Getter
 void Circle::setradius(float r){
 rad_=r;}
 float Circle::getradius(){
	return rad_;}

//Bool
 bool Circle::operator< (Circle const& b){
  return rad_ < b.rad_;}
 bool Circle::operator> (Circle const& b){
  return rad_ > b.rad_;}		
 bool Circle::operator== (Circle const& b){
  return rad_ == b.rad_;}
	

