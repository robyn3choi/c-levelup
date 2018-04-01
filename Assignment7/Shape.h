#ifndef SHAPE_H
#define SHAPE_H

#include <string>

using namespace std;

class Shape
{
public:
	Shape(std::string& name);
	~Shape();

	const string& GetName() { return mName; } const
	void SetName(string& name) { mName = name; }

	virtual void Print() const = 0;
	float BelowZeroCheck(float number) const;

private:
	string mName;
};

#endif