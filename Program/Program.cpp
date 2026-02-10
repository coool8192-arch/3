// Program.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int packet = 1;

void swap(int & parameterX, int & parameterY)
{
	int temp = parameterX;
	parameterX = parameterY;
	parameterY = temp;
}

int main()
{
#pragma region 스트림
	// 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름입니다.

	//std::cout << "c++";
	//
	//int count = 0;
	//
	//std::cin >> count;
	//
	//for (int i = 0; i < count; i++)
	//{
	//	std::cout << "PlayStation "<< i + 1 << std::endl;
	//}

	// 스트림은 운영 체제에 의해 생성되며,
	// 스트림 자체에 임시 메모리 공간인 버퍼가 존재합니다.

#pragma endregion

#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는 용도의 연산자입니다.

	//int packet = 100;
	//
	//std::cout << packet << std::endl;
	//std::cout << ::packet << std::endl;

	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가 선언되었을 때
	// 가장 가까운 범위에 선언된 변수의 이름을 사용하는 범위 규칙이 있어서 전역 변수를 호출하지 않습니다.

#pragma endregion

#pragma region 참조자
	// 하나의 변수에 또다른 이름을 지정하는 지정자입니다.
	//int x = 12;
	//int y = 20;
	//
	//swap(x, y);
	//
	//std::cout << "x : " << x << std::endl;
	//std::cout << "y : " << y << std::endl;

#pragma endregion

#pragma region 동적 할당
	int* pointer = new int ;

	*pointer = 10;

	std::cout << "pointer가 가리키는 주소의 값 : " << *pointer << std::endl;

	delete pointer;

	pointer = new int[5];

	*pointer =  10, 20, 30, 40, 50 ;

	for (int i = 0; i < 5; i++)
	{
	std::cout << "pointer가 가리키는 주소의 값 : " << *pointer << std::endl;
	}

	delete pointer;
#pragma endregion

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
