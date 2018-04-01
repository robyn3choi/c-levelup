#include "StringArray.h"
#include <iostream>
#include <unordered_set>
#include <algorithm>

StringArray::StringArray()
{
}


StringArray::~StringArray()
{
	for (int i = 0; i < mVector.size(); i++)
	{
		delete mVector[i];
	}
	mVector.clear();
}

void StringArray::Add(char * string)
{
	mVector.push_back(string);
}

void StringArray::Remove(char * string)
{
	for (int i = 0; i < mVector.size(); i++)
	{
		if (mVector[i] == string)
		{
			mVector.erase(mVector.begin() + i);
			return;
		}
	}
}

char * StringArray::GetStringAtIndex(int index) const
{
	return mVector[index];
}

bool StringArray::CheckDuplicate1() const
{
	// brute force method, compare every string to every other string
	for (int i = 0; i < mVector.size()-1; i++)
	{
		for (int j = i+1; j < mVector.size(); j++)
		{
			if (mVector[i] == mVector[j])
			{
				return true;
			}
		}
	}
	return false;
}

bool StringArray::CheckDuplicate2() const
{
	// add all strings to a set, checking if a string has already been added
	std::unordered_set<char*> set;
	for (int i = 0; i < mVector.size(); i++)
	{
		if (set.count(mVector[i]) > 0)
		{
			return true;
		}
		else (set.insert(mVector[i]));
	}
	return false;
}

bool StringArray::CheckDuplicate3() const
{
	// sort the array so that identical strings would be adjacent to each other
	std::vector<char*> sorted(mVector);
	std::sort(sorted.begin(), sorted.end());

	for (int i = 1; i < sorted.size(); i++)
	{
		if (sorted[i] == sorted[i - 1])
		{
			return true;
		}
	}

	return false;
}

void StringArray::Print() const
{
	for (int i = 0; i < mVector.size(); i++)
	{
		std::cout << mVector[i] << std::endl;
	}
}

