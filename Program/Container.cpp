#include "stdafx.h"
#include "Container.h"
template<typename T>
inline Container<T>::Container(int allocateSize)
{
	size = allocateSize;

	index = 0;

	list = new T[allocateSize];
}

template<typename T>
void Container<T>::Push(T data)
{
		if (index >= size)
		{
			cout << "Index out of range" << endl;
			return;
		}
		list[index++] = data;
}

template<typename T>
const int& Container<T>::Sum()
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += list[i];
	}
	return sum;
}

template<typename T>
Container<T>::~Container()
{
	delete[] list;
}

template class Container<bool>;
template class Container<char>;
template class Container<int>;
template class Container<float>;
template class Container<double>;
template class Container<const char*>;
