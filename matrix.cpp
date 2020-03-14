#include "pch.h"
#include "matrix.h"

namespace TREXMATH
{
	mat4::mat4()
	{
		data[0] = 1.0f;
		data[1] = 0.0f;
		data[2] = 0.0f;
		data[3] = 0.0f;
		data[4] = 0.0f;
		data[5] = 1.0f;
		data[6] = 0.0f;
		data[7] = 0.0f;
		data[8] = 0.0f;
		data[9] = 0.0f;
		data[10] = 1.0f;
		data[11] = 0.0f;
		data[12] = 0.0f;
		data[13] = 0.0f;
		data[14] = 0.0f;
		data[15] = 1.0f;
	}

	mat4 TREXMATH::mat4::operator*(const mat4& m) const
	{
		mat4 result;
		result.data[0] = data[0] * m.data[0] + data[4] * m.data[1] + data[8] * m.data[2] + data[12] * m.data[3];
		result.data[1] = data[1] * m.data[0] + data[5] * m.data[1] + data[9] * m.data[2] + data[13] * m.data[3];
		result.data[2] = data[2] * m.data[0] + data[6] * m.data[1] + data[10] * m.data[2] + data[14] * m.data[3];
		result.data[3] = data[3] * m.data[0] + data[7] * m.data[1] + data[11] * m.data[2] + data[15] * m.data[3];
		result.data[4] = data[0] * m.data[4] + data[4] * m.data[5] + data[8] * m.data[6] + data[12] * m.data[7];
		result.data[5] = data[1] * m.data[4] + data[5] * m.data[5] + data[9] * m.data[6] + data[13] * m.data[7];
		result.data[6] = data[2] * m.data[4] + data[6] * m.data[5] + data[10] * m.data[6] + data[14] * m.data[7];
		result.data[7] = data[3] * m.data[4] + data[7] * m.data[5] + data[11] * m.data[6] + data[15] * m.data[7];
		result.data[8] = data[0] * m.data[8] + data[4] * m.data[9] + data[8] * m.data[10] + data[12] * m.data[11];
		result.data[9] = data[1] * m.data[8] + data[5] * m.data[9] + data[9] * m.data[10] + data[13] * m.data[11];
		result.data[10] = data[2] * m.data[8] + data[6] * m.data[9] + data[10] * m.data[10] + data[14] * m.data[11];
		result.data[11] = data[3] * m.data[8] + data[7] * m.data[9] + data[11] * m.data[10] + data[15] * m.data[11];
		result.data[12] = data[0] * m.data[12] + data[4] * m.data[13] + data[8] * m.data[14] + data[12] * m.data[15];
		result.data[13] = data[1] * m.data[12] + data[5] * m.data[13] + data[9] * m.data[14] + data[13] * m.data[15];
		result.data[14] = data[2] * m.data[12] + data[6] * m.data[13] + data[10] * m.data[14] + data[14] * m.data[15];
		result.data[15] = data[3] * m.data[12] + data[7] * m.data[13] + data[11] * m.data[14] + data[15] * m.data[15];
		return result;
	}

	mat4 mat4::operator+(const mat4& m) 
	{
		mat4 result;
		result.data[0] = m.data[0] + this->data[0];
		result.data[1] = m.data[1] + this->data[1];
		result.data[2] = m.data[2] + this->data[2];
		result.data[3] = m.data[3] + this->data[3];
		result.data[4] = m.data[4] + this->data[4];
		result.data[5] = m.data[5] + this->data[5];
		result.data[6] = m.data[6] + this->data[6];
		result.data[7] = m.data[7] + this->data[7];
		result.data[8] = m.data[8] + this->data[8];
		result.data[9] = m.data[9] + this->data[9];
		result.data[10] = m.data[10] + this->data[10];
		result.data[11] = m.data[11] + this->data[11];
		result.data[12] = m.data[12] + this->data[12];
		result.data[13] = m.data[13] + this->data[13];
		result.data[14] = m.data[14] + this->data[14];
		result.data[15] = m.data[15] + this->data[15];
		return result;
	}

	mat4& mat4::operator*=(const mat4& m)
	{
		mat4 result;
		result.data[0] = data[0] * m.data[0] + data[4] * m.data[1] + data[8] * m.data[2] + data[12] * m.data[3];
		result.data[1] = data[1] * m.data[0] + data[5] * m.data[1] + data[9] * m.data[2] + data[13] * m.data[3];
		result.data[2] = data[2] * m.data[0] + data[6] * m.data[1] + data[10] * m.data[2] + data[14] * m.data[3];
		result.data[3] = data[3] * m.data[0] + data[7] * m.data[1] + data[11] * m.data[2] + data[15] * m.data[3];
		result.data[4] = data[0] * m.data[4] + data[4] * m.data[5] + data[8] * m.data[6] + data[12] * m.data[7];
		result.data[5] = data[1] * m.data[4] + data[5] * m.data[5] + data[9] * m.data[6] + data[13] * m.data[7];
		result.data[6] = data[2] * m.data[4] + data[6] * m.data[5] + data[10] * m.data[6] + data[14] * m.data[7];
		result.data[7] = data[3] * m.data[4] + data[7] * m.data[5] + data[11] * m.data[6] + data[15] * m.data[7];
		result.data[8] = data[0] * m.data[8] + data[4] * m.data[9] + data[8] * m.data[10] + data[12] * m.data[11];
		result.data[9] = data[1] * m.data[8] + data[5] * m.data[9] + data[9] * m.data[10] + data[13] * m.data[11];
		result.data[10] = data[2] * m.data[8] + data[6] * m.data[9] + data[10] * m.data[10] + data[14] * m.data[11];
		result.data[11] = data[3] * m.data[8] + data[7] * m.data[9] + data[11] * m.data[10] + data[15] * m.data[11];
		result.data[12] = data[0] * m.data[12] + data[4] * m.data[13] + data[8] * m.data[14] + data[12] * m.data[15];
		result.data[13] = data[1] * m.data[12] + data[5] * m.data[13] + data[9] * m.data[14] + data[13] * m.data[15];
		result.data[14] = data[2] * m.data[12] + data[6] * m.data[13] + data[10] * m.data[14] + data[14] * m.data[15];
		result.data[15] = data[3] * m.data[12] + data[7] * m.data[13] + data[11] * m.data[14] + data[15] * m.data[15];
		this->data[0] = result.data[0];
		this->data[1] = result.data[1];
		this->data[2] = result.data[2];
		this->data[3] = result.data[3];
		this->data[4] = result.data[4];
		this->data[5] = result.data[5];
		this->data[6] = result.data[6];
		this->data[7] = result.data[7];
		this->data[8] = result.data[8];
		this->data[9] = result.data[9];
		this->data[10] = result.data[10];
		this->data[11] = result.data[11];
		this->data[12] = result.data[12];
		this->data[13] = result.data[13];
		this->data[14] = result.data[14];
		this->data[15] = result.data[15];
		return *this;
	}

	mat4& mat4::operator+=(const vec3& v)
	{
		this->data[12] += v.x;
		this->data[13] += v.y;
		this->data[14] += v.z;
		return *this;
	}

	mat4& mat4::operator*=(const vec3& v)
	{
		mat4 result = *this * mat4::scaler(v);
		this->data[0] = result.data[0];
		this->data[1] = result.data[1];
		this->data[2] = result.data[2];
		this->data[3] = result.data[3];
		this->data[4] = result.data[4];
		this->data[5] = result.data[5];
		this->data[6] = result.data[6];
		this->data[7] = result.data[7];
		this->data[8] = result.data[8];
		this->data[9] = result.data[9];
		this->data[10] = result.data[10];
		this->data[11] = result.data[11];
		this->data[12] = result.data[12];
		this->data[13] = result.data[13];
		this->data[14] = result.data[14];
		this->data[15] = result.data[15];
		return *this;
	}

	mat4 mat4::scaler(const vec3& v)
	{
		mat4 scaler = mat4();
		scaler.data[0] = v.x;
		scaler.data[5] = v.y;
		scaler.data[10] = v.z;
		return scaler;
	}

	mat4 mat4::translater(const vec3& v)
	{
		mat4 translater = mat4();
		translater.data[12] = v.x;
		translater.data[13] = v.y;
		translater.data[14] = v.z;
		return translater;
	}

	mat4 mat4::euler_rotator(const vec3& v)
	{
		return rotator_z(v.z) * rotator_y(v.y) * rotator_x(v.x);
	}

	mat4 mat4::rotator_x(const float angle)
	{
		mat4 rotator = mat4();
		const float c = cosf(angle);
		const float s = sinf(angle);
		rotator.data[5] = c;
		rotator.data[6] = s;
		rotator.data[9] = -s;
		rotator.data[10] = c;
		return rotator;
	}

	mat4 mat4::rotator_y(const float angle)
	{
		mat4 rotator = mat4();
		const float c = cosf(angle);
		const float s = sinf(angle);
		rotator.data[0] = c;
		rotator.data[2] = -s;
		rotator.data[8] = s;
		rotator.data[10] = c;
		return rotator;
	}

	mat4 mat4::rotator_z(const float angle)
	{
		mat4 rotator = mat4();
		const float c = cosf(angle);
		const float s = sinf(angle);
		rotator.data[0] = c;
		rotator.data[1] = s;
		rotator.data[4] = -s;
		rotator.data[5] = c;
		return rotator;
	}

	mat4 mat4::rotator_quaternion(const quaternion& q)
	{
		mat4 result;
		const float c = cosf(q.w);
		const float s = sinf(q.w);
		const float one_c = 1.0f - c;
		const float x = q.x;
		const float y = q.y;
		const float z = q.z;
		const float xx = x * x;
		const float xy = x * y;
		const float xz = x * z;
		const float yy = y * y;
		const float yz = y * z;
		const float zz = z * z;
		const float l = xx + yy + zz;
		const float sqrt_l = sqrtf(l);
		result.data[0] = (xx + (yy + zz) * c) / l;
		result.data[1] = (xy * one_c + z * sqrt_l * s) / l;
		result.data[2] = (xz * one_c - y * sqrt_l * s) / l;
		result.data[3] = 0.0f;
		result.data[4] = (xy * one_c - z * sqrt_l * s) / l;
		result.data[5] = (yy + (xx + zz) * c) / l;
		result.data[6] = (yz * one_c + x * sqrt_l * s) / l;
		result.data[7] = 0.0f;
		result.data[8] = (xz * one_c + y * sqrt_l * s) / l;
		result.data[9] = (yz * one_c - x * sqrt_l * s) / l;
		result.data[10] = (zz + (xx + yy) * c) / l;
		result.data[11] = 0.0f;
		result.data[12] = 0.0f;
		result.data[13] = 0.0f;
		result.data[14] = 0.0f;
		result.data[15] = 1.0f;
		return result;
	}

	mat4 mat4::perspective(const float fov, const float aspect, const float n, const float f)
	{
		mat4 result;
		result.data[0] = (1.0f / tanf(fov * 0.5f)) / aspect;
		result.data[1] = 0.0f;
		result.data[2] = 0.0f;
		result.data[3] = 0.0f;
		result.data[4] = 0.0f;
		result.data[5] = 1.0f / tanf(fov * 0.5f);
		result.data[6] = 0.0f;
		result.data[7] = 0.0f;
		result.data[8] = 0.0f;
		result.data[9] = 0.0f;
		result.data[10] = -(f + n) / (f - n);
		result.data[11] = -1.0f;
		result.data[12] = 0.0f;
		result.data[13] = 0.0f;
		result.data[14] = -(2 * f * n) / (f - n);
		result.data[15] = 0.0f;
		return result;
	}

	mat4 mat4::model(const vec3 position, const vec3 rotation, const vec3 scale)
	{
		mat4 result = mat4();
		result *= mat4::translater(position);
		result *= mat4::rotator_x(rotation.x);
		result *= mat4::rotator_y(rotation.y);
		result *= mat4::rotator_z(rotation.z);
		result *= mat4::scaler(scale);
		return result;
	}

	mat4 mat4::view(const vec3 position, const vec3 rotation)
	{
		mat4 result = mat4();
		result *= mat4::rotator_y(rotation.x);
		result *= mat4::rotator_x(rotation.y);
		return result;
	}

	mat4 mat4::transposed()
	{
		mat4 result;
		result.data[1] = data[4];
		result.data[2] = data[8];
		result.data[3] = data[12];
		result.data[6] = data[9];
		result.data[7] = data[13];
		result.data[11] = data[14];

		result.data[4] = data[1];
		result.data[8] = data[2];
		result.data[12] = data[3];
		result.data[9] = data[6];
		result.data[13] = data[7];
		result.data[14] = data[11];
		return result;
	}

	void mat4::transpose()
	{
		mat4 result = transposed();
		this->data[0] = result.data[0];
		this->data[1] = result.data[1];
		this->data[2] = result.data[2];
		this->data[3] = result.data[3];
		this->data[4] = result.data[4];
		this->data[5] = result.data[5];
		this->data[6] = result.data[6];
		this->data[7] = result.data[7];
		this->data[8] = result.data[8];
		this->data[9] = result.data[9];
		this->data[10] = result.data[10];
		this->data[11] = result.data[11];
		this->data[12] = result.data[12];
		this->data[13] = result.data[13];
		this->data[14] = result.data[14];
		this->data[15] = result.data[15];
	}

	void mat4::print()
	{
		for (int x = 0; x < 4; x++)
		{
			printf("| ");
			for (int y = 0; y < 4; y++)
			{
				printf("%.2f ", data[x + y * 4]);
			}
			printf("|\n");
		}
	}
}