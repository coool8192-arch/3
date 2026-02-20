#include "stdafx.h"
#include "Message.h"

void Message::Send(const char* content)
{
	cout << "메시지 내용 : " << content << endl;
}

void Message::Send(const char* content, int frequency)
{
	cout << "메시지 내용 : " << content << ", 주파수 : " << frequency << endl;
}

void Message::Send(float frequency)
{
	cout << "주파수 : " << frequency << endl;
}
