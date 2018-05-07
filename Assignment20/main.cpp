#include "Button.h"
#include "ExampleClass.h"
#include <iostream>
#include <functional>

void GlobalFunction()
{
	std::cout << "global function" << std::endl;
}

namespace ExampleNamespace
{
	void ExampleNamespaceFunction()
	{
		std::cout << "example namespace function" << std::endl;
	}
}

int main()
{
	UI::Button button;

	std::function<void()> globalFunction = GlobalFunction;
	int globalFunctionKey = button.RegisterToPress(globalFunction);


	std::function<void()> namespaceFunction = ExampleNamespace::ExampleNamespaceFunction;
	int namespaceFunctionKey = button.RegisterToPress(namespaceFunction);


	ExampleClass exampleClass;
	std::function<void()> classFunction = std::bind(&ExampleClass::ExampleClassFunction, exampleClass);
	int classFunctionKey = button.RegisterToPress(classFunction);
	

	std::function<void()> lambda = []()
	{
		std::cout << "lambda" << std::endl;
	};
	int lambdaKey = button.RegisterToRelease(lambda);


	button.Press();
	button.Release();


	button.UnregisterToPress(globalFunctionKey);

	button.Press();
	button.Release();

	while (1);
	return 0;
}