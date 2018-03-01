#pragma once
class Belt
{
public:
	Belt();
	Belt(int size);
	~Belt();
	int GetSize();
	void SetSize(int size);

private:
	int mSize;
};

