/// \file rectangle.cpp
///	\brief class Rectangle: implementation of the functions
///
///	Details.
///

#include <iostream>

#include "Rectangle.h"

/// @brief default constructor, changes values of area and perimeter inherited from Polygon
Rectangle::Rectangle() {

	cout << "Rectangle - constructor - default" << endl;

	Init();

	Area();
	Perimeter();

}

/// @brief init constructor, changes values of area and perimeter inherited from Polygon
/// @param w width
/// @param h length
Rectangle::Rectangle(float w, float l) {

	Init();

	cout << "Rectangle - constructor" << endl;

	if (w <= 0) 
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		width = w;

	if (l <= 0) 
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		length = l;

	Area();
	Perimeter();
}

/// @brief copy constructor, changes values of area and perimeter inherited from Polygon
/// @param rectangle to copy passed by reference
Rectangle::Rectangle(const Rectangle &r)
{
	cout << "Rectangle - copy constructor" << endl;
	
	Init(r);

	Area();
	Perimeter();
}

/// @brief destructor 
Rectangle::~Rectangle() {

	cout << "Rectangle - destructor" << endl;

}



/// @brief overload operator =, changes values of area and perimeter inherited from Polygon
/// @param Rectagle to be copied passed by reference (as a constant to block an eventual change to the object to be copied)
/// @return this object
Rectangle& Rectangle::operator=(const Rectangle& r)
{
	cout << "Rectangle - operator =" << endl;

	Reset();
	Init(r);

	Area();
	Perimeter();

	return *this;
}

/// @brief overload operator == (useful for if(obj1=obj2) construct, when are to obj equal? we have to decide it, obj1 is the caller, obj2 is called as a parameter)
/// @param Rectagle to check if it is equal to the rectangle that called == operator (as a constant to block an eventual change)
/// @return true if lentgh and width of the two rectangles are equal, false otherwise (we decided the meaning of the operator ==)
bool Rectangle::operator==(const Rectangle& r)
{
	if (width == r.width && length == r.length)
	{
		return true;
	}
	return false;
}



/// @brief set width of the object, changes values of area and perimeter inherited from Polygon
/// @param w width
void Rectangle::SetWidth(float w) {

	if (w < 0) {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}

	width = w;

	Area();
	Perimeter();
}

/// @brief set length of the object, changes values of area and perimeter inherited from Polygon
/// @param l length
void Rectangle::SetLength(float l) {

	if (l < 0) {
		cout << "WARNING: Rectangle - SetLength: length should be > 0" << endl;
		return;
	}

	length = l;

	Area();
	Perimeter();
}

/// @brief set width and length of the object, changes values of area and perimeter inherited from Polygon
/// @param w width
/// @param l length
void Rectangle::SetDim(float w, float l) {

	SetWidth(w);
	SetLength(l);
	Area();
	Perimeter();
}



/// @brief get width of the object
/// @return width of the object
float Rectangle::GetWidth() {

	return width;

}

/// @brief get length of the object
/// @return length of the object
float Rectangle::GetLength() {

	return length;

}

/// @brief get width and length of the object returning them in the given variables
/// @param given variable for width in pixels
/// @param given variable for length in pixels
void Rectangle::GetDim(float&w, float&l) {

	w = width;
	l = length;

	return;
}

/// @brief return area of the rectangle
/// @return area of the rectangle
float Rectangle::GetArea()
{
	return area;
}

/// @brief return perimeter of the rectangle
/// @return perimeter of the rectangle
float Rectangle::GetPerimeter()
{
	return perimeter;
}


/// @brief function to calculate the area of a rectangle, changes value of area inherited from Polygon, vitualized = 0
/// @return perimeter if the rectangle
float Rectangle::Area()
{
	area = width * length;
	return area;
}

/// @brief function to calculate the perimeter of a rectangle, changes value of perimeter inherited from Polygon, vitualized = 0
/// @return perimeter if the rectangle
float Rectangle::Perimeter()
{
	perimeter = 2 * (length + width);
	return perimeter;
}

/// @brief function to initialize a default Rectangle
void Rectangle::Init()
{
	width = 0;
	length = 0;
}

/// @brief function to copy the values of a given Rectangle in the Rectangle that calls the function
/// @param Reference to rectangle to copy
void Rectangle::Init(const Rectangle& r)
{
	width = r.width;
	length = r.length;
}

/// @brief function to reset the parameters of a Rectangle
void Rectangle::Reset()
{
	width = 0;
	length = 0;
}

/// @brief error message function
/// @param error string
void Rectangle::ErrorMessage(const char* string)
{
	cout << "Rectangle - Error Message - " << string << endl;
}

/// @brief diagnostic function, also calls diagnostic funciton of polygon
void Rectangle::Dump()
{
	Polygon::Dump();

	cout << "Rectangle - Diagnostic" << endl;
	cout << "length value is: " << length << endl;
	cout << "width value is: " << width << endl;
}