#pragma once
#include <functional>
#include <vector>
#include <unordered_map>
#include <functional>

namespace UI
{
	class Button
	{
	public:
		Button() {};
		~Button() {};

		int RegisterToPress(std::function<void()> callback)
		{
			mPressCallbacks.insert({ mPressIndex, callback });
			return mPressIndex++;
		}

		int RegisterToRelease(std::function<void()> callback)
		{
			mReleaseCallbacks.insert({ mReleaseIndex, callback });
			return mReleaseIndex++;
		}

		void UnregisterToPress(int key)
		{
			mPressCallbacks.erase(key);
		}

		void UnregisterToRelease(int key)
		{
			mReleaseCallbacks.erase(key);
		}

		void Press()
		{
			for (auto callback : mPressCallbacks)
			{
				callback.second();
			}
		}
		void Release()
		{
			for (auto callback : mReleaseCallbacks)
			{
				callback.second();
			}
		}

	private:	
		std::unordered_map<int, std::function<void()>> mPressCallbacks;
		std::unordered_map<int, std::function<void()>> mReleaseCallbacks;

		int mPressIndex = 0;
		int mReleaseIndex = 0;
	};
}


