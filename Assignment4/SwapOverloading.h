#pragma once
#include <string>

class SwapOverloading
{
public:
	SwapOverloading();
	~SwapOverloading();

	void Run();

private:
	void Swap(int& x, int& y);
	void Swap(bool& x, bool& y);
	void Swap(std::string& x, std::string& y);
};

