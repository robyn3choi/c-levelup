#include <iostream>
#include <string>

#include"Shapes.h"

void PrintName(std::string name);

int main()
{
	Circle circle(std::string("Circle"), 5.0f);
	Rectangle rectangle(std::string("Rectangle"), 69.2f, 7.2f);
	Sphere sphere(std::string("Sphere"), 2.0f);
	Cube cube(std::string("Cube"), 5.0f, 2.0f, 7.8f);

	PrintName(circle.GetName());
	circle.Print();

	PrintName(rectangle.GetName());
	rectangle.Print();

	PrintName(sphere.GetName());
	sphere.Print();

	PrintName(cube.GetName());
	cube.Print();

	while (1);
	return 0;
}

void PrintName(std::string name)
{
	std::cout << "Name: " << name << std::endl;
}