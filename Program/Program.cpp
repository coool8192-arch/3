#include "stdafx.h"
#include "Vector.h"

int main()
{
#pragma region 캡슐화
	// 객체의 속성과 기능을 하나의 단위로 합치고
	// 외부에서 필요한 정보만 접근할 수 있게 제한하는 기능입니다.

	Vector point1(1, 0);
	Vector point2(0, 1);

	Vector point3 = point1 + point2;

	++point3;
#pragma endregion

	return 0;
}

