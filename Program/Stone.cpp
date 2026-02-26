#include "stdafx.h"
#include "Stone.h"

Stone::Stone()
{
	Hardness = 1.5f;
	Immunity = 6.0f;
}

void Stone::Describe()
{
	cout << "돌 경도 : " << Hardness << endl << "돌 저항력 : " << Immunity << endl;
}

Stone::~Stone()
{
	cout << "Stone Destroyed" << endl;
}
