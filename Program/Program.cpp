#include "stdafx.h"

template <typename T>
bool Same(T left, T right)
{
	return left == right;
}

int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고 하나의 값이 여러 데이터 형식을 가질 수 있는
	// 기술에 중점을 두어 재사용성을 높일 수 있는 기능입니다.

	cout << Same('a','a') << endl;
	cout << Same(3,6) << endl;
	cout << Same(1.5f,2.75f) << endl;
	cout << Same("Apple","Apple") << endl;
#pragma endregion

	return 0;
}

