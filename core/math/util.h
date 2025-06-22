#pragma once
#include <cmath>

constexpr float PI = 3.14159265358979323846f;

constexpr float degToRad(float deg)
{
	return deg * (PI / 180.0f);
}

constexpr float radToDeg(float rad)
{
	return rad * (180.0f / PI);
}