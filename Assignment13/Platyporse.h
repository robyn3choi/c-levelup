#pragma once
class Platyporse
{
public:
	Platyporse(float billLength);
	~Platyporse();

	bool operator<(const Platyporse& rhs) const;
	bool operator>(const Platyporse& rhs) const;

	float GetBillLength() const;

	void Print() const;

private:
	float mBillLength;
};

