#include <iostream>
#include "../Program/Potion.h"

using namespace std;

//class Consumable {
//protected:
//	const char* name;
//public:
//	Consumable()
//	{
//		cout << "Created" << endl;
//	}
//
//	~Consumable()
//	{
//		cout << "Deleted" << endl;
//	}
//};
//
//class Potion :public Consumable {
//private:
//	int stamina;
//public:
//	Potion()
//	{
//		cout << "Potion Created" << endl;
//	}
//
//	~Potion()
//	{
//		cout << "Potion Deleted" << endl;
//	}
//};

int main()
{
#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있게 설정하는 기능입니다.

	Consumable c;
	Potion p;

	cout << sizeof(c) << endl;
	cout << sizeof(p) << endl;

	// 상속 관계의 클래스끼리는 일방적인 관계이고, 하위 클래스가 상위 클래스의 메모리를 포함한 상태의 크기로 결정됩니다.
#pragma endregion

	return 0;
}

