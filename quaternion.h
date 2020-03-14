#pragma once

#include "vec3.h"

#ifdef TREXMATH_EXPORTS
#define TREXMATH_API __declspec(dllexport)
#else
#define TREXMATH_API __declspec(dllimport)
#endif

namespace TREXMATH
{
	TREXMATH_API struct quaternion
	{
		TREXMATH_API quaternion() = default;
		TREXMATH_API quaternion(const float x, const float y, const float z);
		TREXMATH_API static quaternion euler_angles(const vec3& axis);
		float x, y, z, w;
	};
	typedef quaternion qat4;
}