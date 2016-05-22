
#ifndef CIRCLE_HPP
#define CIRCLE_HPP



class Circle{
//PUBLIC
 public:
	Circle();
	//const& !
	Circle(float rad);

	void setradius(float r); //Set Radius
	float getradius();       // Get Radius

bool operator< (Circle const& b);
bool operator> (Circle const& b);		
bool operator== (Circle const& b);
//PRIVATE
 private:
float rad_;
};

#endif

