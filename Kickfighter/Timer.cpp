#include "Timer.h"

namespace Utils
{
	Timer::Timer(float timeBetweenUpdates)
		: mDeltaTime(0.0f)
		, mTotalTime(0.0f)
		, mTimeAtLastUpdate(0.0f)
		, mTimeBetweenUpdates(timeBetweenUpdates)
	{
		// Frquency of the CPU - GHz - Cylces per second (tick)
		// Counter - What tick is the CPU currently on.

		QueryPerformanceFrequency(&mTicksPerSecond);
		QueryPerformanceCounter(&mCurrentTick);
		mLastTick = mCurrentTick;
	}

	Timer::~Timer()
	{
		// Empty
	}

	bool Timer::Update()
	{
		// Get current tick
		QueryPerformanceCounter(&mCurrentTick);

		// Determine the time between frames
		mDeltaTime = static_cast<float>(mCurrentTick.QuadPart - mLastTick.QuadPart) / mTicksPerSecond.QuadPart;
		mTotalTime += mDeltaTime;

		// Check if the timer should tell the calling function to update.
		bool shouldUpdate = false;
		if (mTotalTime - mTimeAtLastUpdate >= mTimeBetweenUpdates)
		{
			shouldUpdate = true;
			mTimeAtLastUpdate = mTotalTime;
		}

		// Reset
		mLastTick = mCurrentTick;
		return shouldUpdate;
	}
}