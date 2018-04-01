#include <string>

#include "TwoDimensional.h"

class Rectangle : public TwoDimensional
{
public:
	Rectangle(std::string& name, float width, float height);
	~Rectangle();

	void SetWidth(float width);
	void SetHeight(float height);

	float GetWidth() { return mWidth; }
	float GetHeight() { return mHeight; }

	virtual float GetArea() const override;
	virtual float GetPerimeter() const override;

	void Print() const override;

private:
	float mWidth;
	float mHeight;
};