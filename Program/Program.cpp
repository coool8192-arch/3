#include "stdafx.h"
#include "unordered_set"
#include <unordered_map>

int main()
{
#pragma region 연관 컨테이너
	// 특정한 방식으로 데이터를 저장하고 검색하는 컨테이너입니다.

#pragma region unordered_set

	//unordered_set<const char*> uoset;
	//
	//uoset.reserve(16);
	//
	//uoset.max_load_factor(2.0f);
	//
	//uoset.insert("몰락한 왕의 검");
	//uoset.insert("무한의 대검");
	//uoset.insert("루덴의 메아리");
	//uoset.insert("그림자 검");
	//uoset.insert("해신 작쇼");
	//uoset.insert("강철심장");
	//uoset.insert("구원");
	//uoset.insert("라바돈의 죽음모자");
	//uoset.insert("태양불꽃 망토");
	//
	//cout << "Load Factor : " << uoset.load_factor() << endl;
	//cout << "Bucket count : " << uoset.bucket_count() << endl;
	//
	//if (uoset.find("구원") != uoset.end())
	//{
	//	cout << "Data exists" << endl;
	//}
	//else
	//{
	//	cout << "Data not found" << endl;
	//}
	//
	//uoset.erase("강철심장");
	//
	//for (const char* i : uoset)
	//{
	//	cout << i << endl;
	//}
#pragma endregion

#pragma region unordered map

	unordered_map<string, int> unordered_map;

	unordered_map["potion"] = 4;
	unordered_map["apple"] = 2;
	unordered_map["meat"] = 3;

	string name;
	cin >> name;

	if (unordered_map[name] > 0 && unordered_map.find(name) != unordered_map.end())
	{
		unordered_map[name]--;

		cout << name << " use " << endl;

		if (unordered_map[name] <= 0)
		{
			unordered_map.erase(name);

			cout << name << "All the " << name << " has been used" << endl;
		}
	}
	else
	{
		cout << "Doesn't Exist." << endl;
	}

	for (const auto& element : unordered_map)
	{
		cout << "Name : " << element.first << " - Quantity : " << element.second << endl;
	}

#pragma endregion

#pragma endregion

	return 0;
}

