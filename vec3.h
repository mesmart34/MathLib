#pragma once
#include <math.h>

#ifdef TREXMATH_EXPORTS
#define TREXMATH_API __declspec(dllexport)
#else
#define TREXMATH_API __declspec(dllimport)
#endif

namespace TREXMATH
{
	TREXMATH_API struct vec3
	{
		TREXMATH_API vec3() = default;
		TREXMATH_API vec3(const float x, const float y, const float z);
		TREXMATH_API vec3 operator+ (const vec3& a) const;
		TREXMATH_API vec3& operator+= (const vec3& a);
		TREXMATH_API vec3 operator- (vec3 const& a) const;
		TREXMATH_API vec3 operator- ();
		TREXMATH_API vec3& operator-= (const vec3& a);
		TREXMATH_API vec3 operator* (vec3 const& a) const;
		TREXMATH_API vec3 operator* (float s) const;
		TREXMATH_API vec3& operator*= (const vec3& a);
		TREXMATH_API vec3& operator*= (float s);
		TREXMATH_API inline static vec3 lerp(vec3 start, vec3 end, float c);
		TREXMATH_API static vec3 normalized(vec3 v);
		TREXMATH_API static vec3 cross_product(const vec3 a, const vec3 b);
		TREXMATH_API inline static float magnitude(vec3 v);
		TREXMATH_API inline static float dot_product(const vec3 a, const vec3 b);
		TREXMATH_API inline static float distance(const vec3 a, const vec3 b);
		float x, y, z;
	};
}
