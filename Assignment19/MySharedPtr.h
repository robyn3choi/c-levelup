#pragma once
#include "MyRefObject.h"
#include <iostream>

template <class T>
class MySharedPtr
{
public:

	MySharedPtr(T* ptr) : mPtr(ptr)
	{
		mRefObject = new MyRefObject();
	}

	// copy constructor
	MySharedPtr(const MySharedPtr& sharedPtr) : 
		mPtr(sharedPtr.mPtr), mRefObject(sharedPtr.mRefObject)
	{
		mRefObject->AddRef();
	}

	// copy assignment operator
	MySharedPtr& operator=(MySharedPtr* sharedPtr)
	{
		if (this != &sharedPtr)
		{
			mPtr = sharedPtr.mPtr;
			mRefObject = sharedPtr.mRefObject;
		}
	}

	// copy assignment operator with raw ptr
	MySharedPtr& operator=(const T* ptr)
	{
		if (ptr != nullptr)
		{
			mPtr = ptr;
			mRefObject = new MyRefObject();
		}
	}

	// move constructor
	MySharedPtr(MySharedPtr&& sharedPtr) : 
		mPtr(sharedPtr.mPtr), mRefObject(sharedPtr.mRefObject)
	{
		sharedPtr.mPtr = nullptr;
		sharedPtr.mRefObject = nullptr;
	}

	// move constructor with raw pointer
	//MySharedPtr(T*&& ptr) : mPtr(ptr)
	//{
	//	mRefObject = new MyRefObject();
	//}

	// move assignment operator
	MySharedPtr& operator=(MySharedPtr&& sharedPtr)
	{
		if (this != &sharedPtr)
		{
			mPtr = sharedPtr.mPtr;
			sharedPtr.mPtr = nullptr;
			mRefObject = sharedPtr.mRefObject;
			sharedPtr.mRefObject = nullptr;
		}
	}

	// move assignment operator with raw ptr
	MySharedPtr& operator=(T*&& ptr)
	{
		if (ptr != nullptr)
		{
			mPtr = ptr;
			ptr = nullptr;
			mRefObject = new MyRefObject();
		}
	}

	~MySharedPtr()
	{
		std::cout << "one ref removed" << std::endl;
		mRefObject->RemoveRef();
		if (mRefObject->GetRefCount() == 0)
		{
			delete mRefObject;
			mRefObject = nullptr;
			delete mPtr;
			std::cout << "all refs removed" << std::endl;
		}
		mPtr = nullptr;
	}

	T* Get() const { return mPtr; }
	T* operator->() const { return mPtr; }
	T& operator*() const { return *mPtr; }
	bool operator==(const MySharedPtr& sharedPtr) const { return mPtr == sharedPtr.mPtr; }

private:
	T* mPtr = nullptr;
	MyRefObject* mRefObject = nullptr;
};
