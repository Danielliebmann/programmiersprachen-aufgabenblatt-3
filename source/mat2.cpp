#include "mat2.hpp"
#include "vec2.hpp"
#include <iostream>
#include <math.h>

Mat2::Mat2(){ //EINHEITSMATRIXX
	this->matrix[0][0] = 1;
	this->matrix[0][1] = 0;
	this->matrix[1][0] = 0;
	this->matrix[1][1] = 1;
}

Mat2::Mat2(float a, float b = 0, float c = 0, float d = 0){ //Definition der einzelnen Matrizen
	this->matrix[0][0] = a;
	this->matrix[0][1] = b;
	this->matrix[1][0] = c;
	this->matrix[1][1] = d;
}
Mat2& Mat2::operator*=(Mat2 const & m){ //MatrixMultiplikationsOperator
	Mat2 temporary = *this;	
	matrix[0][0] = temporary.matrix[0][0] * m.matrix[0][0] + temporary.matrix[0][1] * m.matrix[1][0];
	matrix[0][1] = temporary.matrix[0][0] * m.matrix[0][1] + temporary.matrix[0][1] * m.matrix[1][1];
	matrix[1][0] = temporary.matrix[1][0] * m.matrix[0][0] + temporary.matrix[1][1] * m.matrix[0][1];
	matrix[1][1] = temporary.matrix[1][0] * m.matrix[0][1] + temporary.matrix[1][1] * m.matrix[1][1];

	return *this;
}

bool Mat2::equal(Mat2 const& m){ //wahrheitenschtscheidung, wenn m0*m1 = mRes 
	bool same = true;
	for (int i = 0; i < 2; i++){
	for (int j = 0; j < 2; j++){
	 if (matrix[i][j] != m.matrix[i][j]) {
	 break;
		}	
	      }
	}
	return same;
}

Mat2 operator*(Mat2 const& m0, Mat2 const& m1){
	Mat2 neueMatrix = m0;
	neueMatrix *= m1;
	 return neueMatrix;
}

Vec2 Mat2::operator*=(Vec2 const& v){
	Vec2 ZVektor;	
	ZVektor.x = matrix[0][0] * v.x + matrix[0][1] * v.y;//Matrixzeile * Vektorspalte
	ZVektor.y = matrix[1][0] * v.x + matrix[1][1] * v.y;
	 return ZVektor;
}

Vec2 operator*(Mat2 const& m, Vec2 const& v) {
	Mat2 m2 = m;
	Vec2 neuerVektor = (m2 *= v); // neuer Vektor
	 return neuerVektor;
}

Vec2 operator*(Vec2 const& v, Mat2 const& m) {
	Mat2 m2 = m;
	Vec2 neuerVektor = (m2 *= v);
	 return neuerVektor;
}

float Mat2::det() const {
	 return (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);
}

Mat2& Mat2::operator*=(float k){
	 for (int i = 0; i < 2; ++i) {
		for (int l = 0; l < 2; ++l) {
			matrix[i][l] *= k; 
		}
	}
	 return *this;
}

Mat2 inverse(Mat2 const& m){
	Mat2 TM{0,m.matrix[0][1],m.matrix[1][0],0};
	TM.matrix[0][0] = m.matrix[1][1];	// switche d an Position von a
	TM.matrix[0][1] *= -1;
	TM.matrix[1][0] *= -1;
	TM.matrix[1][1] = m.matrix[0][0];	// switche a an Position von d
	 float Determinante = m.det();
	 if (Determinante) { return ( TM *= (1 / (Determinante)) ); }
	  return ( TM *= 0 );
}

Mat2 transpose(Mat2 const& m){
	Mat2 mNew{m.matrix[0][0],m.matrix[1][0],m.matrix[0][1],m.matrix[1][1]};
	 return mNew;
}

Mat2 make_rotation_mat2(float phi){
	Mat2 mNew{(float) sin(phi), (float) cos(phi), (float) -sin(phi), (float) cos(phi)};
	 return mNew;
}




			
