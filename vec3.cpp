#include "pch.h"
#include "vec3.h"

namespace TREXMATH
{
	vec3::vec3(const float x, const float y, const float z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	vec3 vec3::operator+(const vec3& a) const
	{
		return vec3(this->x + a.x, this->y + a.y, this->z + a.z);
	}

	vec3& vec3::operator+=(const vec3& a)
	{
		this->x += a.x;
		this->y += a.y;
		return *this;
	}

	vec3 vec3::operator-(vec3 const& a) const
	{
		return vec3(this->x - a.x, this->y - a.y, this->z - a.z);
	}

	vec3 vec3::operator-()
	{
		return  vec3(-x, -y, -z);
	}

	vec3& vec3::operator-=(const vec3& a)
	{
		this->x -= a.x;
		this->y -= a.y;
		this->z -= a.z;
		return *this;
	}

	vec3 vec3::operator*(vec3 const& a) const
	{
		return vec3(this->x * a.x, this->y * a.y, this->z * a.z);
	}

	vec3 vec3::operator*(float s) const
	{
		return vec3(this->x * s, this->y * s, this->z * s);
	}

	vec3& vec3::operator*=(const vec3& a)
	{
		this->x *= a.x;
		this->y *= a.y;
		this->z *= a.z;
		return *this;
	}

	vec3& vec3::operator*=(float s)
	{
		this->x *= s;
		this->y *= s;
		this->z *= s;
		return *this;
	}

	vec3 vec3::lerp(const vec3 start, const vec3 end, const float c)
	{
		return start + (end - start) * c;
	}

	vec3 vec3::normalized(vec3 v)
	{
		const auto m = magnitude(v);
		return vec3(v.x / m, v.y / m, v.z / m);
	}

	float vec3::magnitude(vec3 v)
	{
		return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
	}

	float vec3::dot_product(const vec3 a, const vec3 b)
	{
		return a.x * b.x + a.y * b.y + a.z + b.z;
	}

	vec3 vec3::cross_product(const vec3 a, const vec3 b)
	{
		return vec3(
			a.y * b.z - a.z * b.y,
			a.z * b.x - a.x * b.z,
			a.x * b.y - a.y * b.x
		);
	}

	float vec3::distance(const vec3 a, const vec3 b)
	{
		return sqrtf((b.x - a.x) * (b.x - a.x) + (b.y - a.y)* (b.y - a.y) + (b.z - a.z) * (b.z - a.z));
	}
}