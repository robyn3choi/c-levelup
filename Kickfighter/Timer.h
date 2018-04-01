#ifndef TIMER_H
#define TIMER_H

#include <Windows.h>

namespace Utils
{
	class Timer
	{
	public:
		Timer(float timeBetweenUpdates = 0.0f);
		~Timer();

		bool Update();

		// Delta Time == Time between current frame and last frame
		float GetDeltaTime() const { return mDeltaTime; }
		float GetTotalTime() const { return mTotalTime; }

	private:
		float mDeltaTime;
		float mTotalTime;

		float mTimeAtLastUpdate;
		float mTimeBetweenUpdates;

		LARGE_INTEGER mTicksPerSecond;
		LARGE_INTEGER mLastTick;
		LARGE_INTEGER mCurrentTick;
	};
}
#endif