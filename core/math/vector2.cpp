#include "Vector2.h"

//Kicking things off with a vector 2 class

Vector2::Vector2(float x, float y) {
	this->x = x;
	this->y = y;
}

float Vector2::length() const {
	return std::sqrt(x * x + y * y);
}

Vector2 Vector2::normalized() const {

	return length() == 0 ?
		Vector2(0.0f,0.0f) :
		(*this) * (1.0f / length());

}

Vector2 Vector2::operator+(const Vector2& other) const {
	return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::operator-(const Vector2& other) const {
	return Vector2(x - other.x, y - other.y);
}

Vector2 Vector2::operator*(const float scalar) const {
	return Vector2(x * scalar, y * scalar);
}

float Vector2::dot(const Vector2& other) const {
	return (this->x * other.x + this->y * other.y);
}

float Vector2::angleInRadians(const Vector2& other) const {
	return std::acos(
		this->dot(other) /
		this->length() * other.length());
}


