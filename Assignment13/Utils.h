#pragma once

namespace Utils
{
	template<class T>
	const T* GetLargestItem(const T* items, unsigned int itemsSize)
	{
		T result = *items;
		items++;
		int index = 1;
		while (index < itemsSize)
		{
			if (*items > result)
			{
				result = *items;
			}
			items++;
			index++;
		}

		result.Print();
		return &result;
	}

	template<class T>
	const T*GetSmallestItem(const T* items, unsigned int itemsSize)
	{
		T result = *items;
		items++;
		int index = 1;
		while (index < itemsSize)
		{
			if (*items < result)
			{
				result = *items;
			}
			items++;
			index++;
		}

		result.Print();
		return &result;
	}
}