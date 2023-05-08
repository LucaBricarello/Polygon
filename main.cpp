#include<iostream>

#include "Rectangle.h"
#include "rhombus.h"

int main() {
	
	
	//--------------------------------------------------------------------------------------------------------------------------------
	//-----------------------------------------------------RECTANGLE TEST-------------------------------------------------------------
	//--------------------------------------------------------------------------------------------------------------------------------
	
	
	//test variables
	float w;
	float l;

	float w1;
	float l1;

	float A;
	float P;

	Rectangle objRectA(10, 5);
	Rectangle objRectB;
	Rectangle objRectC;

	objRectA.Dump();

	objRectB.SetDim(3, 7);

	objRectA.SetWidth(4);

	w = objRectB.GetLength();

	l = objRectB.GetWidth();

	objRectB.GetDim(w1, l1);

	objRectC = objRectB;


	if (objRectC == objRectB);
	{
		cout << "C and B are equal" << endl;
	}

	A = objRectA.GetArea();

	P = objRectA.GetPerimeter();


	//--------------------------------------------------------------------------------------------------------------------------------
	//------------------------------------------------------RHOMBUS TEST--------------------------------------------------------------
	//--------------------------------------------------------------------------------------------------------------------------------


	//test variables
	float dH1;
	float dV1;

	float dH2;
	float dV2;

	float side;

	float Per;
	float Ar;

	Rhombus objA;
	Rhombus objB(4, 8);
	Rhombus objC = objB;

	objB.Dump();

	objA.SetDim(5, 10);

	objA.SetHorD(6);

	objA.SetVerD(18);

	dH1 = objA.GetHorD();
	dV1 = objA.GetVerD();
	objA.GetDim(dH2, dV2);
	side = objA.GetSide();

	if (objC == objA)
	{
		cout << "TEST - Differenti" << endl;
	}

	objC = objA;

	if (objC == objA)
	{
		cout << "TEST - Uguali" << endl;
	}

	Per = objA.GetPerimeter();
	Ar = objA.GetArea();



	return 0;
}