#ifndef INPUT_H
#define INPUT_H

#include <string>

namespace Utils
{
	class Input
	{
	public:
		enum class Key
		{
			W,
			A,
			S,
			D,
			Left,
			Right,
			Down,
			Up,
			Space,
			Enter,
			None
		};

		Input();
		~Input();

		void Update();
		void ResetInput();

		void GetKeyString(Key key, std::string& str) const;
		Key GetLastInput() const { return mLastInput; }

	private:
		Key ProcessAsciiInput(int input) const;
		Key ProcessScanCodeInput(int input) const;

	private:
		Key mLastInput;
	};
}
#endif