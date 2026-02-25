#include "stdafx.h"
#include "Stone.h"

Stone::Stone()
{
	Hardness = 1.5;
	Immunity = 6.0;
}

void Stone::Describe()
{
	cout << "돌 경도 : " << Hardness << endl << "돌 저항력 : " << Immunity << endl;
}
