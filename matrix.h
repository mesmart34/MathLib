#pragma once

#include <cstdio>
#include "vec3.h"
#include "quaternion.h"

#ifdef TREXMATH_EXPORTS
#define TREXMATH_API __declspec(dllexport)
#else
#define TREXMATH_API __declspec(dllimport)
#endif


namespace TREXMATH
{
	TREXMATH_API struct mat4
	{
		TREXMATH_API mat4();
		TREXMATH_API mat4 operator*(const mat4& m) const;
		TREXMATH_API mat4 operator+(const mat4& m);
		TREXMATH_API mat4& operator*=(const mat4& m);
		TREXMATH_API mat4& operator+=(const vec3& v);
		TREXMATH_API mat4& operator*=(const vec3& v);
		TREXMATH_API static mat4 scaler(const vec3& v);
		TREXMATH_API static mat4 translater(const vec3& v);
		TREXMATH_API static mat4 euler_rotator(const vec3& v);
		TREXMATH_API static mat4 rotator_x(const float angle);
		TREXMATH_API static mat4 rotator_y(const float angle);
		TREXMATH_API static mat4 rotator_z(const float angle);
		TREXMATH_API static mat4 rotator_quaternion(const quaternion& q);
		TREXMATH_API static mat4 perspective(const float fov, const float aspect, const float n, const float f);
		TREXMATH_API static mat4 model(const vec3 position, const vec3 rotation, const vec3 scale);
		TREXMATH_API static mat4 view(const vec3 position, const vec3 rotation);
		TREXMATH_API mat4 transposed();
		TREXMATH_API void transpose();
		TREXMATH_API void print();
		float data[16];
	};
}