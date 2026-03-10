#include "../Program/stdafx.h"
#include <vector>
#include <list>
#include <deque>

int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하는, 특별한 제약이나 규칙이 없는 컨테이너입니다.

#pragma region vector container

	//vector<int> vector;
	//
	//vector.reserve(8);
	//
	//vector.push_back(10);
	//
	//vector.push_back(20);
	//
	//vector.push_back(30);
	//
	//vector.push_back(40);
	//
	//vector.push_back(50);
	//
	//vector.pop_back();
	//
	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << endl;
	//}
	//
	//vector.clear();
	//
	//cout << vector.size() << endl;
	//cout << vector.capacity() << endl;

#pragma endregion

#pragma region list container

	//list<int> list;
	//
	//list.push_back(10);
	//list.push_back(15);
	//list.push_back(20);
	//list.push_front(5);
	//list.push_back(25);
	//
	//list.pop_front();
	//list.pop_back();
	//
	//list.push_front(50);
	//list.push_back(75);
	//
	//list.remove(20);
	//
	//for (const int& i : list)
	//{
	//	cout << i << endl;
	//}
	//
	//list.assign(3, 5);
	//
	//cout << list.size() << endl;
	//
	//for (const int& i : list)
	//{
	//	cout << i << endl;
	//}

#pragma endregion

#pragma region deque container

	//deque<int> deque;
	//
	//deque.push_back(10);
	//deque.push_back(20);
	//deque.push_back(30);
	//deque.push_front(40);
	//deque.push_front(50);
	//
	//deque.pop_back();
	//deque.pop_front();
	//
	//cout << "deque size : " << deque.size() << endl;
	//
	//for (int i = 0; i < deque.size(); i++)
	//{
	//	cout << deque[i] << endl;
	//}

#pragma endregion


#pragma endregion

	return 0;
}

