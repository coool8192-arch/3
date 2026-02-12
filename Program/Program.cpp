#include <iostream>

using namespace std;

class Soldier {
private:
	static int count;
public:
	Soldier()
	{
		cout << "Created Soldier" << endl;

	}
	
	~Soldier()
	{
		count++;
		cout << count << endl;
	}
};

int Soldier::count = 0;

int main()
{
#pragma region 생성자
	// 클래스의 인스턴스가 생성되는 시점에 자동으로 호출되는 특수한 멤버 함수입니다.

	// 생성자는 객체가 생성될 때 단 한 번만 호출되며,
	// 반환형이 존재하지 않고, 호출되기 전에는 객체에 대한 메모리가 할당되지 않습니다.
#pragma endregion

#pragma region 소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스의 특수한 멤버 함수입니다.

	//Soldier* pointer = new Soldier;
	//
	//delete pointer;
	//
	//pointer = new Soldier;
	//
	//delete pointer;

	// 소멸자는 객체가 메모리에서 해제될 때 단 한 번만 호출되며,  매개 변수를 지정하여 사용할 수 없습니다.
#pragma endregion

#pragma region 얕은 복사
	// 객체를 복사할 때 주소 값을 복사하여 같은 메모리 공간을 가리키게 하는 방식입니다.

	int* pointer = new int;

	int* sub = pointer;

	*pointer = 24;

	cout << "pointer의 값 : " << pointer << endl;
	cout << "sub의 값 : " << sub << endl;

	cout << "pointer가 가리키는 주소의 값 : " << *pointer << endl;
	cout << "sub가 가리키는 주소의 값 : " << *sub << endl;

	delete pointer;

	// 얕은 복사는 같은 객체가 같은 메모리 공간을 참조하기 때문에 하나의 객체로 값을 변경하면 다른 쪽도 영향을 받습니다.
#pragma endregion

}

