#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class Circle{
//PUBLIC
 public:
 Circle(); 
 Circle(float rad);
//Setter-Getter
 void setradius(float r); 
 float getradius();       
 bool operator< (Circle const& b);
 bool operator> (Circle const& b);		
 bool operator== (Circle const& b);
//PRIVATE
 private:
 float rad_;
};

#endif

