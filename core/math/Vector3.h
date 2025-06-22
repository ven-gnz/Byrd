#pragma once;
#include <cmath>
#include <algorithm>

class Vector3 {
public:
	float x, y, z;

	Vector3(float x = 0.0f, float y = 0.0f, float z = 0.0f);


	float length() const;
	float dot(const Vector3&) const;
	float angleInRadians(const Vector3&) const;
	Vector3 normalized() const;
	Vector3 operator+(const Vector3&) const;
	Vector3 operator-(const Vector3&) const;
	Vector3 operator*(const float) const;
	
};