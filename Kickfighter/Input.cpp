#include "Input.h"
#include <conio.h>

namespace Utils
{
	Input::Input()
		: mLastInput(Key::None)
	{
		// Empty
	}

	Input::~Input()
	{
		// Empty
	}

	void Input::Update()
	{
		if (_kbhit())
		{
			int character = _getch();

			// Character could be ASCII
			// Could also be a scan code (arrow keys, function keys, etc.)

			// Check for Scan Code Input - 0xE0 is an escape code indicating scan code
			if (character == 0xE0)
			{
				character = _getch();
				// Process Scan Code
				mLastInput = ProcessScanCodeInput(character);
			}
			else
			{
				// Process ASCII Code
				mLastInput = ProcessAsciiInput(character);
			}
		}
	}

	void Input::ResetInput()
	{
		mLastInput = Key::None;
	}

	void Input::GetKeyString(Key key, std::string& str) const
	{
		switch (key)
		{
		case Key::W:
			str = "W";
			break;

		case Key::A:
			str = "A";
			break;

		case Key::S:
			str = "S";
			break;

		case Key::D:
			str = "D";
			break;

		case Key::Up:
			str = "Up";
			break;

		case Key::Left:
			str = "Left";
			break;

		case Key::Right:
			str = "Right";
			break;

		case Key::Down:
			str = "Down";
			break;

		case Key::Space:
			str = "Space";
			break;

		case Key::Enter:
			str = "Enter";
			break;

		case Key::None:
			str = "None";
			break;

		default:
			str = "Invalid";
			break;
		}
	}

	Input::Key Input::ProcessAsciiInput(int input) const
	{
		switch (input)
		{
		case 'w':
		case 'W':
			return Key::W;

		case 'a':
		case 'A':
			return Key::A;

		case 's':
		case 'S':
			return Key::S;

		case 'd':
		case 'D':
			return Key::D;

		case 32: // ASCII value for Space
			return Key::Space;

		case 13: // ASCII value for Return
			return Key::Enter;

		default:
			return Key::None;
		}
	}

	Input::Key Input::ProcessScanCodeInput(int input) const
	{
		switch (input)
		{
		case 72:
			return Key::Up;

		case 75:
			return Key::Left;

		case 77:
			return Key::Right;

		case 80:
			return Key::Down;

		default:
			return Key::None;
		}
	}
}