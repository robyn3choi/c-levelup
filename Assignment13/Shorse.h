#pragma once
class Shorse
{
public:
	Shorse(int numTeeth);
	~Shorse();

	bool operator<(const Shorse& rhs) const;
	bool operator>(const Shorse& rhs) const;

	int GetNumTeeth() const;

	void Print() const;

private:
	int mNumTeeth;
};

