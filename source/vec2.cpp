#include "vec2.hpp"
#include "math.h"

Vec2& Vec2::operator+=(Vec2 const& v)
{
	x += v.x;
	y += v.y;
	return *this;

}

Vec2& Vec2::operator-=(Vec2 const& v)
{
	x -= v.x;
	y -= v.y;
	return *this;

}

Vec2& Vec2::operator/=(float v)
{
	x /= v;
	y /= v;
	return *this;

}

Vec2& Vec2::operator*=(float v)
{
	x *= v;
	y *= v;
	return *this;

}

// freie Funktionen

Vec2 operator+(Vec2 const& u, Vec2 const& v)
{
	Vec2 nuVector{u.x + v.x, u.y + v.y};
	return nuVector;
}

Vec2 operator-(Vec2 const& u, Vec2 const& v)
{
	Vec2 nuVector{u.x - v.x, u.y - v.y};
	return nuVector;
}

Vec2 operator*(Vec2 const& v, float s)
{
	Vec2 nuVector{v.x * s, v.y * s};
	return nuVector;
}

Vec2 operator/(Vec2 const& v, float s)
{
	Vec2 nuVector{v.x / s, v.y / s};
	return nuVector;
}

Vec2 operator*(float s, Vec2 const& v)
{
	Vec2 nuVector{s * v.x, s * v.y};
	return nuVector;
}
//Distanz von zwei Punkten über deren Vektoren
float distance(Vec2 const& u, Vec2 const& v){
	return sqrt((u.x-v.x)*(u.x-v.x) + (u.y-v.y)*(u.y-v.y));
}
