#pragma once
#include <vector>

class StringArray
{
public:
	StringArray();
	~StringArray();

	void Add(char* string);
	void Remove(char* string);
	char* GetStringAtIndex(int index) const;
	bool CheckDuplicate1() const;
	bool CheckDuplicate2() const;
	bool CheckDuplicate3() const;
	void Print() const;

private:
	std::vector<char*> mVector;
};

