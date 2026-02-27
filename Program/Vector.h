#pragma once
class Vector
{private:
	int x;
	int y;
public:
	Vector(int x, int y);
	const Vector& operator + (const Vector& vector);
	const Vector& operator - (const Vector& vector);
	const Vector& operator * (const Vector& vector);
	const Vector& operator / (const Vector& vector);
	const Vector& operator ++();
	const Vector& operator --();
};

