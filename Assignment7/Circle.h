#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>

#include "TwoDimensional.h"

using namespace std;

class Circle : public TwoDimensional
{
public:
	Circle(std::string& name, float radius);
	~Circle();

	void SetRadius(float radius);
	float GetRadius() const { return mRadius; }

	float GetArea() const override;
	float GetPerimeter() const override;
	void Print() const override;

private:
	float mRadius;
	const float mPie = 3.14f;
	
};

#endif // #ifndef CIRCLE_H