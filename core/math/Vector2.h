#pragma once
#include <cmath>


class Vector2 {
public:
	float x, y;

	Vector2(float x = 0.0f, float y = 0.0f);

	float length() const;
	Vector2 normalized() const;
	Vector2 operator+(const Vector2&) const;
	Vector2 operator-(const Vector2& other) const;
	Vector2 operator*(const float scalar) const;
	
	float dot(const Vector2&) const;
	float angleInRadians(const Vector2&) const;

};



