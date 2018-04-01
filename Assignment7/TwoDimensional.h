#ifndef TWO_DIMENSIONAL_H
#define TWO_DIMENSIONAL_H

#include "Shape.h"

class TwoDimensional : public Shape
{
public:
	TwoDimensional(std::string& name);
	~TwoDimensional();

	virtual float GetArea() const = 0;
	virtual float GetPerimeter() const = 0;
};

#endif // #ifndef TWO_DIMENSIONAL_H