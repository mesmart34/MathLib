#pragma once
#include <math.h>

#ifdef TREXMATH_EXPORTS
#define TREXMATH_API __declspec(dllexport)
#else
#define TREXMATH_API __declspec(dllimport)
#endif

namespace TREXMATH
{
	TREXMATH_API struct vec2
	{
		TREXMATH_API vec2() = default;
		TREXMATH_API vec2(const float x, const float y);
		TREXMATH_API vec2 operator+ (const vec2& a) const;
		TREXMATH_API vec2& operator+= (const vec2& a);
		TREXMATH_API vec2 operator- (vec2 const& a) const;
		TREXMATH_API vec2 operator- ();
		TREXMATH_API vec2& operator-= (const vec2& a);
		TREXMATH_API vec2 operator* (vec2 const& a) const;
		TREXMATH_API vec2 operator* (float s) const;
		TREXMATH_API vec2& operator*= (const vec2& a);
		TREXMATH_API vec2& operator*= (float s);
		TREXMATH_API inline static vec2 lerp(vec2 start, vec2 end, float c);
		TREXMATH_API static vec2 normalized(vec2 v);
		TREXMATH_API inline static float cross_product(const vec2 a, const vec2 b);
		TREXMATH_API inline static float magnitude(vec2 v);
		TREXMATH_API inline static float dot_product(const vec2 a, const vec2 b);
		TREXMATH_API inline static float distance(const vec2 a, const vec2 b);
		float x, y;
	};
}
