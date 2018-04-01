#ifndef SPHERE_H
#define SPHERE_H

#include <string>

#include "ThreeDimensional.h"

class Sphere : public ThreeDimensional
{
public:
	Sphere(std::string& name, float radius);
	~Sphere();

	void SetRadius(float radius);
	float GetRadius() const { return mRadius; }

	float GetVolume() const override;
	float GetSurfaceArea() const override;

	void Print() const override;

private:
	float mRadius;
	const float mPie = 3.14f;
};

#endif // #ifndef SPHERE_H