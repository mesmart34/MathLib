#include "pch.h"
#include "vec2.h"

namespace TREXMATH
{
	vec2::vec2(const float x, const float y)
	{
		this->x = x;
		this->y = y;
	}


	vec2 vec2::operator+(const vec2& a) const
	{
		return vec2(this->x + a.x, this->y + a.y);
	}

	vec2& vec2::operator+=(const vec2& a)
	{
		this->x += a.x;
		this->y += a.y;
		return *this;
	}

	vec2 vec2::operator-(vec2 const& a) const
	{
		return vec2(this->x - a.x, this->y - a.y);
	}

	vec2 vec2::operator-()
	{
		return  vec2(-x, -y);
	}

	vec2& vec2::operator-=(const vec2& a)
	{
		this->x -= a.x;
		this->y -= a.y;
		return *this;
	}

	vec2 vec2::operator*(vec2 const& a) const
	{
		return vec2(this->x * a.x, this->y * a.y);
	}

	vec2 vec2::operator*(float s) const
	{
		return vec2(this->x * s, this->y * s);
	}

	vec2& vec2::operator*=(const vec2& a)
	{
		this->x *= a.x;
		this->y *= a.y;
		return *this;
	}

	vec2& vec2::operator*=(float s)
	{
		this->x *= s;
		this->y *= s;
		return *this;
	}

	vec2 vec2::lerp(const vec2 start, const vec2 end, const float c)
	{
		return start + (end - start) * c;
	}

	vec2 vec2::normalized(vec2 v)
	{
		const auto m = magnitude(v);
		return vec2(v.x / m, v.y / m);
	}

	float vec2::magnitude(vec2 v)
	{
		return sqrtf(v.x * v.x + v.y * v.y);
	}

	float vec2::dot_product(const vec2 a, const vec2 b)
	{
		return a.x * b.x + a.y * b.y;
	}

	float vec2::cross_product(const vec2 a, const vec2 b)
	{
		return (a.x * b.y) - (a.y * b.x);
	}

	float vec2::distance(const vec2 a, const vec2 b)
	{
		return sqrtf((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
	}
}