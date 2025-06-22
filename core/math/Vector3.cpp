#include "Vector3.h"

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

float Vector3::length() const
{
	return std::sqrt(x * x + y * y + z * z);
}

Vector3 Vector3::normalized() const
{
	return this->length() == 0 ?
		Vector3(0.0, 0.0, 0.0) :
		(*this) * ( 1.0f / length());
}

float Vector3::dot(const Vector3 &other) const
{
	return (this->x * other.x
		+ this->y * other.y +
		this->z * other.z);

}

float Vector3::angleInRadians(const Vector3& other) const {

	Vector3 aNorm = this->normalized();
	Vector3 bNorm = this->normalized();
	float cosT = aNorm.dot(bNorm);

	// needs clamping or similar safeguarding in order to reduce the risk of under and overflows
	return std::acos(cosT);


}



Vector3 Vector3::operator+(const Vector3& other) const
{
	return Vector3(this->x + other.x, this->y + other.y, this->z + other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const
{
	return Vector3(this->x - other.x, this->y - other.y, this->z - other.z);
}

Vector3 Vector3::operator*(const float scalar) const
{
	return Vector3(this->x * scalar, this->y * scalar, this->z * scalar);
}