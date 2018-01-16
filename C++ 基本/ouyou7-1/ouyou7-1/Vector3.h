#ifndef _VECTOR3_H_
#define _VECTOR3_H_
class Vector3
{
public:
	double x;
	double y;
	double z;
	Vector3 &operator=(const Vector3&v);
	Vector3 &operator+=(const Vector3&v);
	Vector3 &operator-=(const Vector3&v);
};
Vector3 operator+(const Vector3 &v1, const Vector3 &v2);
Vector3 operator-(const Vector3 &v1, const Vector3 &v2);
Vector3 operator*(const double d, const Vector3 &v);
#endif