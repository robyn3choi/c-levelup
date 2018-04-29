#pragma once
class MyRefObject
{
public:
	MyRefObject() {}
	~MyRefObject() {}

	void AddRef() { mRefCount++; }
	void RemoveRef() { mRefCount--; }
	int GetRefCount() { return mRefCount; }

private:
	int mRefCount = 1;
};

