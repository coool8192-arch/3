#include "../Program/stdafx.h"
#include "Concrete.h"
#include "Stone.h"

int main()
{
#pragma region 추상화
	// 복잡한 시스템이나 객체의 내부에 있는 세부 사항을 숨기고
	// 필요한 부분만 외부에서 사용할 수 있게 단순화하는 작업입니다.

	//Concrete concrete;
	//Stone stone;
	//
	//concrete.Describe();
	//stone.Describe();

	//Block* block[2] = { nullptr };
	//block[0] = new Concrete;
	//block[1] = new Stone;
	//
	//for (int i = 0; i < 2; i++)
	//{
	//	block[i]->Describe();
	//}
	//
	//for (int i = 0; i < 2; i++)
	//{
	//	delete block[i];
	//}

	// 추상 클래스는 정의되지 않은 함수가 있어 객체 생성이 불가능합니다.
#pragma endregion

	return 0;
}

