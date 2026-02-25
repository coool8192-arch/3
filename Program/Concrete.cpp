#include "stdafx.h"
#include "Concrete.h"


Concrete::Concrete()
{
	 Hardness = 1.8;
	 Immunity = 1.8;
}
void Concrete::Describe()
{
	cout << "能农府飘 版档 : " << Hardness << endl << "能农府飘 历亲仿 : " << Immunity << endl;
}
