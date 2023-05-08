/*! \file polygon.h
	\brief Declaration of the class Polygon

	Details.
*/


#ifndef POLYGON_H
#define POLYGON_H

using namespace std;

/// @class Polygon
/// @brief to manage an object with the shape of a Polygon
class Polygon
{
private:


public:

	//default constructor
	Polygon();

	//init constructor
	Polygon(float _area, float _perimeter);

	//copy constructor
	Polygon(const Polygon& p);

	//destructor
	virtual ~Polygon();



	//overload operator =
	Polygon& operator=(const Polygon& p);

	//overload operator ==
	bool operator==(const Polygon& p);


	//initialization and reset
	void Init();
	void Init(const Polygon& X);
	void Reset();

	//error message function
	void ErrorMessage(const char* string);

	//diagnostic function
	virtual void Dump();


	//getters
	float GetArea();
	float GetPerimeter();


protected:

	float area;
	float perimeter;

	virtual float Area() = 0;
	virtual float Perimeter() = 0;
};

#endif

