/*! \file rhombus.h
	\brief Declaration of the class Rhombus

	Details.
*/


#ifndef RHOMBUS_H
#define RHOMBUS_H

#include <math.h>

#include "polygon.h"

using namespace std;

/// @class Rhombus
/// @brief to manage an object with the shape of a Rhombus inherit from Polygon
class Rhombus : public Polygon
{
private:

	float diagonalH;
	float diagonalV;

	float Side();

public:

	//default constructor
	Rhombus();

	// init constructor
	Rhombus(float dH, float dV);

	//copy constructor
	Rhombus(const Rhombus &r);

	//destructor
	~Rhombus();


	//overload operator =
	Rhombus& operator=(const Rhombus& r);

	//overload operator ==
	bool operator==(const Rhombus& r);


	//initialization and reset
	void Init();
	void Init(const Rhombus& X);
	void Reset();

	//error message function
	void ErrorMessage(const char* string);

	//diagnostic function
	void Dump();

	//Setters
	void SetHorD(float dH);
	void SetVerD(float dV);
	void SetDim(float dH, float dV);

	//Getters
	float GetHorD();
	float GetVerD();
	void GetDim(float& dH, float& dV);
	float GetSide();
	float GetArea();
	float GetPerimeter();

	//Functions virtualized in Polyg
	float Area();
	float Perimeter();
};

#endif
