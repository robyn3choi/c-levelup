#pragma once
class BitArray64
{
public:
	BitArray64();
	~BitArray64();

	int Get();
	void Return(int index);
	void Set(int index, bool value);
	bool Value(int index);

private:
	const unsigned int ArraySize = 64;
	 
	long long mBits = 0;
	long long mBitsInUse = 0;
};

