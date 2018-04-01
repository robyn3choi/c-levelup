#ifndef THREE_DIMENSIONAL_H
#define THREE_DIMENSIONAL_H

#include <string>
#include "Shape.h"

class ThreeDimensional : public Shape
{
public:
	ThreeDimensional(std::string& name);
	~ThreeDimensional();

	virtual float GetVolume() const = 0;
	virtual float GetSurfaceArea() const = 0;
	virtual void Print() const = 0;
};

#endif // #ifndef THREE_DIMENSIONAL_H