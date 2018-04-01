#ifndef CUBE_H
#define CUBES_H

#include <string>

#include "ThreeDimensional.h"

class Cube : public ThreeDimensional
{
public:
	Cube(std::string& name, float width, float height, float depth);
	~Cube();

	void SetWidth(float width);
	void SetHeight(float height);
	void SetDepth(float depth);

	float GetWidth() const;
	float GetHeight() const;
	float GetDepth() const;

	float GetVolume() const override;
	float GetSurfaceArea() const override;

	void Print() const override;

private:
	float mWidth;
	float mHeight;
	float mDepth;
};

#endif // #ifndef CUBE_H