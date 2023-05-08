/*! \file polygon.cpp
	\brief class Polygon: implementation of the functions

	Details.
*/

#include <iostream>

#include "polygon.h"

/// @brief default constructor
Polygon::Polygon()
{
	cout << "Polygon - Default Constructor" << endl;

	Init();
}

/// @brief init constructor
/// @param _area area of the polygon
/// @param _perimeter perimeter of the polygon
Polygon::Polygon(float _area, float _perimeter)
{
	cout << "Polygon - Init Constructor" << endl;

	Init();

	if (_area <= 0)
		ErrorMessage("WARNING: Polygon - Init Constructor: Area should be > 0");
	else
		area = _area;

	if (_perimeter <= 0)
		ErrorMessage("WARNING: Polygon - Init Constructor: perimeter should be > 0");
	else
		perimeter = _perimeter;
}

/// @brief copy constructor
/// @param Polygon to copy passed by reference
Polygon::Polygon(const Polygon& p)
{
	cout << "Polygon - Copy Constructor" << endl;

	Init(p);

}

/// @brief destructor 
Polygon::~Polygon()
{
	cout << "Polygon - destructor" << endl;
	Reset();
}

/// @brief overload operator =
/// @param Polygon to be copied passed by reference (as a constant to block an eventual change to the object to be copied)
/// @return this object
Polygon& Polygon::operator=(const Polygon& p)
{

	cout << "Polygon - operator =" << endl;

	Reset();
	Init(p);

	return *this;

}

/// @brief overload operator ==
/// @param Polygon to check if it is equal to the Polygon that called == operator (as a constant to block an eventual change)
/// @return false because I cannot declare that 2 polygons are equal knowing area and perimeter
bool Polygon::operator==(const Polygon& p)
{

	cout << "Polygon - operator ==" << endl;

	return false;

}



/// @brief function to initialize a default Polygon
void Polygon::Init()
{
	area = 0;
	perimeter = 0;
}

/// @brief function to copy the values of a given Polygon in the Polygon that calls the function
/// @param Reference to Polygon to copy
void Polygon::Init(const Polygon& X)
{
	area = X.area;
	perimeter = X.perimeter;
}

/// @brief function to reset the parameters of a Polygon
void Polygon::Reset()
{
	area = 0;
	perimeter = 0;
}

/// @brief error message function
/// @param error string
void Polygon::ErrorMessage(const char* string)
{
	cout << "Polygon - Error Message - " << string << endl;
}

/// @brief diagnostic function
void Polygon::Dump()
{
	cout << "Polygon - Diagnostic" << endl;
	cout << "area value is: " << area << endl;
	cout << "perimeter value is: " << perimeter << endl;
}

/// @brief return area of the Polygon
/// @return area of the Polygon
float Polygon::GetArea()
{
	return area;
}

/// @brief return perimeter of the Polygon
/// @return perimeter of the Polygon
float Polygon::GetPerimeter()
{
	return perimeter;
}