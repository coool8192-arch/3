#include "../Program/stdafx.h"
#include "Vector.h"

Vector::Vector(int x, int y)
{
	this->x = x;
	this->y = y;
}

const Vector& Vector::operator+(const Vector& vector)
{
	Vector Add(x + vector.x, y + vector.y);
	return Add;
}

const Vector& Vector::operator-(const Vector& vector)
{
	Vector Difference(x - vector.x, y - vector.y);
	return Difference;
}

const Vector& Vector::operator*(const Vector& vector)
{
	Vector Multiple(x * vector.x, y * vector.y);
	return Multiple;
}

const Vector& Vector::operator/(const Vector& vector)
{
	Vector Devide(x / vector.x, y / vector.y);
	return Devide;
}

const Vector& Vector::operator++()
{
	++x;
	++y;
	return *this;
}

const Vector& Vector::operator--()
{
	--x;
	--y;
	return *this;
}

const Vector& Vector::operator++(int)
{
	Vector a(x, y);
	x++;
	y++;
	return a;
}

const Vector& Vector::operator--(int)
{
	Vector a(x, y);
	x--;
	y--;
	return a;
}
