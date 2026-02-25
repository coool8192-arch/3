#pragma once
class Block
{protected:
	float Hardness;
	float Immunity;
public:
	virtual void Describe() = 0;
};

