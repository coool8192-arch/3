#include <iostream>

using namespace std;

namespace Argentina
{
	float area = 2780000;
	void information()
	{
		cout << "수도 부에노스아이레스, 인구 4570만명, 면적" << area << "km²" << endl;
	}
}

namespace Brazil
{
	float area = 8516000;
	void information()
	{
		cout << "수도 브라질리아, 인구 2.12억명, 면적" << area << "km²" << endl;
	}

}

using namespace Brazil;

class location
{
#pragma region 접근 지정자
	// 클래스 내부에 포함된 속성에 대한 접근 범위를 제한하는 지정자입니다.

	// public : 클래스 내부, 자기가 상속하는 클래스, 클래스 외부까지 접근을 허용합니다.
	// protected : 클래스 내부, 자기가 상속하는 클래스까지만 접근을 허용합니다.
	// private : 클래스 내부까지만 접근을 허용합니다.
#pragma endregion

	int x = 4;
	int y = 3;
	int z = -5;

protected: const char* name = "좌표";

public: void position()
{

	cout << "현재 위치 : " << x << ", " << y << ", " << z << endl;
}
};

void Profile(const char* name = "Jack", int age = 20)
{
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
}

int main()
{
#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.

	//Argentina::information();
	//information();
#pragma endregion

#pragma region 클래스
	// 사용자 정의 데이터 유형으로 속성과 함수가 포함되고, 객체를 생성해 접근 및 사용하는 집합체입니다.

	//location location;
	//
	//location.position();
	//
	//cout << "location 크기 : " << sizeof(location) << endl;

	// 클래스의 경우 내부의 변수는 클래스의 메모리 영역에 포함되지만, 정적 변수와 함수는 포함되지 않습니다.
#pragma endregion

#pragma region 기본 매개 변수
	// 함수의 매개 변수에 값이 전달되지 않을 때, 미리 값을 설정해두는 변수입니다.

	Profile();
	Profile("Kei", 15);

	// 기본 매개 변수는 오른쪽에서부터 값을 지정해주어야 합니다. (컴파일러가 왼쪽부터 순서대로 읽기 때문)
#pragma endregion

}

