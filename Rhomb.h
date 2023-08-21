#pragma once
#include "Parallelogram.h"
class Rhomb :public Parallelogram
{
protected:
	std::string name = "Ромб";
public:
	Rhomb(int a,int b,int c, int d, int A, int B, int C, int D);
	std::string GetName() override;

};
