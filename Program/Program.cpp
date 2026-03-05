#include "stdafx.h"
#include "Material.h"
#include "Resource.h"

int main()
{
#pragma region 스마트 포인터
	// 포인터를 사용하면서 자동으로 메모리 관리를 해주며,
	// 경계 확인 등의 추가 기능을 제공해주는 포인터입니다.

#pragma region unique pointer
	// 특정 객체를 하나의 스마트 포인터만 가리킬 수 있게 되어 있는 포인터입니다.

	//unique_ptr<Material> material = make_unique<Material>();
	//unique_ptr<Material> reference = move(material);
#pragma endregion

#pragma region shared pointer
	// 하나의 자원 객체를 여러 포인터 변수가 가리킬 수 있고,
	// 자원 객체를 필요로 하는 포인터 객체가 모두 없어졌을 때
	// 자원 객체가 해제되도록 설계된 포인터입니다.

	//shared_ptr<Resource> pointer = make_shared<Resource>();
	//
	//{
	//	shared_ptr<Resource> reference = pointer;
	//
	//	cout << pointer.use_count() << endl;
	//}
	//
	//cout << pointer.use_count() << endl;

#pragma endregion

#pragma endregion


	return 0;
}

