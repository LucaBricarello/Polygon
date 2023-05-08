/*! \file rhombus.cpp
	\brief class Rhombus: implementation of the functions

	Details.
*/

#include<iostream>
#include "rhombus.h"

/// @brief default constructor, changes values of area and perimeter inherited from Polygon
Rhombus::Rhombus() 
{

	cout << "Rhombus - constructor - default" << endl;

	Init();

	Area();
	Perimeter();
}

/// @brief init constructor, changes values of area and perimeter inherited from Polygon
/// @param dH horizontal diagonal dimension
/// @param dL horizontal diagonal dimension
Rhombus::Rhombus(float dH, float dV)
{

	Init();

	cout << "Rhombus - Constructor" << endl;

	if (dH <= 0)
		ErrorMessage("WARNING: Rhombus - Constructor: diagonalH should be > 0");
	else
		diagonalH = dH;

	if (dV <= 0)
		ErrorMessage("WARNING: Rhombus - Constructor: diagonalV should be > 0");
	else
		diagonalV = dV;

	Area();
	Perimeter();
}


/// @brief copy constructor, changes values of area and perimeter inherited from Polygon
/// @param Rhombus to copy passed by reference
Rhombus::Rhombus(const Rhombus& r)
{
	cout << "Rhombus - Copy constructor" << endl;

	Init(r);

	Area();
	Perimeter();
}

/// @brief destructor 
Rhombus::~Rhombus() 
{

	cout << "Rhombus - Destructor" << endl;

}

/// @brief overload operator =, changes values of area and perimeter inherited from Polygon
/// @param Rhombus to be copied passed by reference (as a constant to block an eventual change to the object to be copied)
/// @return this object
Rhombus& Rhombus::operator=(const Rhombus& r)
{
	cout << "Rhombus - operator =" << endl;

	Reset();
	Init(r);

	Area();
	Perimeter();

	return *this;
}

/// @brief overload operator == (useful for if(obj1=obj2) construct, when are to obj equal? we have to decide it, obj1 is the caller, obj2 is called as a parameter)
/// @param Rhombus to check if it is equal to the Rhombus that called == operator (as a constant to block an eventual change)
/// @return true if diagonalH and diagonalV of the two Rhombus are equal, false otherwise (we decided the meaning of the operator ==)
bool Rhombus::operator==(const Rhombus& r)
{
	if (diagonalH == r.diagonalH && diagonalV == r.diagonalV)
	{
		return true;
	}
	return false;
}

/// @brief calculates the side of the Rhombus with the two diagonals
/// @return side of the Rhombus
float Rhombus::Side()
{
	return (float)sqrt(pow(diagonalH/2, 2) + pow(diagonalV / 2, 2));
}

/// @brief set diagonalH of the object, changes values of area and perimeter inherited from Polygon
/// @param dH diagonalH to set in pixels
void Rhombus::SetHorD(float dH)
{

	if (dH < 0) {
		ErrorMessage("WARNING: Rhombus - SetHorD: horizontal diagonal should be > 0");
		return;
	}

	diagonalH = dH;

	Area();
	Perimeter();
}

/// @brief set diagonalV of the object, changes values of area and perimeter inherited from Polygon
/// @param dV diagonalV to set in pixels
void Rhombus::SetVerD(float dV)
{

	if (dV < 0) {
		ErrorMessage("WARNING: Rhombus - SetVerD: vertical diagonal should be > 0");
		return;
	}

	diagonalV = dV;

	Area();
	Perimeter();
}

/// @brief set dimensions of the object, changes values of area and perimeter inherited from Polygon
/// @param dH diagonalH to set in pixels
/// @param dV diagonalV to set in pixels
void Rhombus::SetDim(float dH, float dV)
{

	SetHorD(dH);
	SetVerD(dV);

	Area();
	Perimeter();

}



/// @brief get diagonalH of the object
/// @return diagonalH of the object
float Rhombus::GetHorD()
{

	return diagonalH;

}

/// @brief get diagonalV of the object
/// @return diagonalV of the object
float Rhombus::GetVerD()
{

	return diagonalV;

}

/// @brief get diagonalH and diagonalV of the object returning them in the given variables
/// @param given variable to return diagonalH in pixels
/// @param given variable to return diagonalV in pixels
void Rhombus::GetDim(float& dH, float& dV)
{

	dH = diagonalH;
	dV = diagonalV;

	return;
}

/// @brief get side of the object
/// @return side of the object
float Rhombus::GetSide()
{
	return Side();
}

/// @brief return area of Rhombus
/// @return area of Rhombus
float Rhombus::GetArea()
{
	return area;
}

/// @brief return perimeter of Rhombus
/// @return perimeter of Rhombus
float Rhombus::GetPerimeter()
{
	return perimeter;
}


/// @brief function to calculate the area of a Rhombus, changes value of area inherited from Polygon, vitualized = 0
/// @return perimeter if the Rhombus
float Rhombus::Area()
{
	area = ((float)diagonalH * (float)diagonalV) / (float)2;
	return area;
}

/// @brief function to calculate the perimeter of a Rhombus, changes value of perimeter inherited from Polygon, vitualized = 0
/// @return perimeter if the Rhombus
float Rhombus::Perimeter()
{
	float side = Side();

	perimeter = (side * 4);
	return perimeter;
}

/// @brief function to initialize a default Rhombus
void Rhombus::Init()
{
	diagonalH = 0;
	diagonalV = 0;
}

/// @brief function to copy the values of a given Rhombus in the Rhombus that calls the function
/// @param Reference to Rhombus to copy
void Rhombus::Init(const Rhombus& r)
{
	diagonalH = r.diagonalH;
	diagonalV = r.diagonalV;
}

/// @brief function to reset the parameters of a Rhombus
void Rhombus::Reset()
{
	diagonalH = 0;
	diagonalV = 0;
}

/// @brief error message function
/// @param error string
void Rhombus::ErrorMessage(const char* string)
{
	cout << "Rhombus - Error Message - " << string << endl;
}

/// @brief diagnostic function, also calls diagnostic funciton of polygon
void Rhombus::Dump()
{
	Polygon::Dump();

	cout << "Rhombus - Diagnostic" << endl;
	cout << "diagonalH value is: " << diagonalH << endl;
	cout << "diagonalV value is: " << diagonalV << endl;
}