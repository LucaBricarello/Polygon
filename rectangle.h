/*! \file rectangle.h
	\brief Declaration of the class Rectangle

	Details.
*/


#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "polygon.h"

using namespace std;

/// @class Rectangle
/// @brief to manage an object with the shape of a rectangle, inherit from Polygon
class Rectangle : public Polygon
{
private:
	float length;
	float width;

public:

	///default constructor
	Rectangle();

	/// init constructor
	Rectangle(float w, float l);

	///copy constructor
	Rectangle(const Rectangle &r);
	
	/// Destructor
	~Rectangle();


	///overload operator =
	Rectangle& operator=(const Rectangle &r);
	bool operator==(const Rectangle& r);
	

	//initialization and reset
	void Init();
	void Init(const Rectangle& X);
	void Reset();

	//error message function
	void ErrorMessage(const char* string);

	//diagnostic function
	void Dump();

	//Setters
	void SetDim(float w, float l);
	void SetLength(float l);
	void SetWidth(float w);
	
	//Getters
	void GetDim(float&w, float&l);
	float GetLength();
	float GetWidth();
	float GetArea();
	float GetPerimeter();

	//Functions virtualized in Polyg
	float Area();
	float Perimeter();
};

#endif