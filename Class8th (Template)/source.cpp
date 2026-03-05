#include "../Program/stdafx.h"
#include "Container.h"
#include "Language.h"

template <typename T>
bool Same(T left, T right)
{
	return left == right;
}

template<>
bool Same(Language a, Language b)
{
	return a.Name() == b.Name();
}
int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고 하나의 값이 여러 데이터 형식을 가질 수 있는
	// 기술에 중점을 두어 재사용성을 높일 수 있는 기능입니다.

	//cout << Same('a','a') << endl;
	//cout << Same(3,6) << endl;
	//cout << Same(1.5f,2.75f) << endl;
	//cout << Same("Apple","Apple") << endl;
	//
	//Container<int> container(5);
#pragma endregion

#pragma region 템플릿 특수화
	// 특정 자료형에 대해 다르게 처리하고 싶은 경우
	// 그에 대해서만 다르게 동작시키는 기능입니다.

	Language Java;
	Language Rust;

	Java.Initialize("function");
	Rust.Initialize("function");

	cout << Same(Java, Rust) << endl;
#pragma endregion

	return 0;
}

