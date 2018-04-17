#pragma once
#include <string>

class Slotter
{
public:
	Slotter();
	~Slotter();

	const std::string& GetName() const { return mName; }
	int GetLegs() const { return mLegs; }
	float GetLength() const { return mLength; }

	void SetName(std::string name);
	void SetLegs(int legs);
	void SetLength(float length);

private:
	std::string mName;
	int mLegs;
	float mLength;
	char mVowels[10] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u' };
};

