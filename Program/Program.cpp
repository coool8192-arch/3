#include "stdafx.h"
#include "Message.h"

int main()
{
#pragma region 다형성
	// 서로 다른 여러 객체가 동일한 기능을 서로 다른 방식으로 처리할 수 있는 기능입니다.

#pragma region 오버로딩
	// 같은 이름의 함수를 매개 변수의 자료형과 개수로 구분하여 다수를 선언할 수 있는 기능입니다.

	Message message;

	message.Send("Hi!",144);

	// 함수의 오버로딩은 함수의 매개 변수에 전달하는 인수의 형태를
	// 보고 호출하기 때문에 반환형으로는 생성이 불가능합니다.
#pragma endregion


	// 다형성은 실행 시점에 함수와 속성이 결정될 수 있는 동적 바인딩을 사용합니다.
#pragma endregion

	return 0;
}

