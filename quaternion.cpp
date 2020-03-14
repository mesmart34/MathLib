#include "pch.h"
#include "quaternion.h"

namespace TREXMATH
{

	quaternion::quaternion(const float x, const float y, const float z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
		this->w = w;
	}

	quaternion quaternion::euler_angles(const vec3& axis)
	{
		quaternion result = quaternion();
		const float hr = axis.z * 0.5f;
		const float shr = sinf(hr);
		const float chr = cosf(hr);
		const float hp = axis.y * 0.5f;
		const float shp = sinf(hp);
		const float chp = cosf(hp);
		const float hy = axis.x * 0.5f;
		const float shy = sinf(hy);
		const float chy = cosf(hy);
		const float chy_shp = chy * shp;
		const float shy_chp = shy * chp;
		const float chy_chp = chy * chp;
		const float shy_shp = shy * shp;
		result.x = (chy_shp * chr) + (shy_chp * shr);
		result.y = (shy_chp * chr) - (chy_shp * shr);
		result.z = (chy_chp * shr) - (shy_shp * chr);
		result.w = (chy_chp * chr) + (shy_shp * shr);
		return result;
	}
}
