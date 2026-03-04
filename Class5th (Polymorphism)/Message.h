#pragma once
class Message
{
public:
	void Send(const char* content);
	void Send(const char* content, int frequency);
	void Send(float frequency);
};

