
#ifndef MAT2_HPP
#define MAT2_HPP
#include "vec2.hpp"
#include <math.h>

class Mat2
{
	public: //Default und UserConstructor
		Mat2();
		Mat2(float a, float b, float c, float d);
		//Operatoren *=
		Mat2& operator*=(Mat2 const& m);
		Vec2 operator*=(Vec2 const& v);
		Mat2& operator*=(float k);
		
		bool equal(Mat2 const& m); //Entscheidungshelfer VektorA=VektorB
		float det() const; //Determinante als float Wert
		float matrix[2][2];//2x2 Matrix als float Wert
};
		//Operatoren *
		Mat2 operator*(Mat2 const& m0, Mat2 const& m1);
		Vec2 operator*(Mat2 const& m, Vec2 const& v);
		Vec2 operator*(Vec2 const& v, Mat2 const& m);
		//Matrizen
		Mat2 inverse(Mat2 const& m);
		Mat2 transpose(Mat2 const& m);
		Mat2 make_rotation_mat2(float phi);

#endif
