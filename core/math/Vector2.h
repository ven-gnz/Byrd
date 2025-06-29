#pragma once
#include <cmath>


class Vector2 {
public:
	float x, y;

	Vector2(float x = 0.0f, float y = 0.0f);

	float length() const;
	Vector2 operator+(const Vector2&) const;
};



