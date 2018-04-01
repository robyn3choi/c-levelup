#include <stdlib.h>
#include <iostream>
#include "Input.h"
#include "Timer.h"
#include "Move.h"
#include "Player.h"
#include "Enemy.h"
#include "Printer.h"

int main()
{
	Printer printer;
	Utils::Timer mTimer(0.5);
	Utils::Input* input = new Utils::Input();
	Player player(input);
	Enemy enemy;
	bool isGameOver = false;

	while (!isGameOver)
	{
		input->Update();

		if (mTimer.Update())
		{
			player.MakeMove();
			enemy.MakeMove();

			player.RespondToMove(enemy.GetCurrentMove());
			enemy.RespondToMove(player.GetCurrentMove());

			system("cls");

			printer.Print(player.GetCurrentMove(), player.GetHealth(),
				enemy.GetCurrentMove(), enemy.GetHealth());

			if (player.GetHealth() == 0 && enemy.GetHealth() == 0)
			{
				isGameOver = true;
				std::cout << std::endl << "DRAW";
			}
			else if (player.GetHealth() == 0)
			{
				isGameOver = true;
				std::cout << std::endl << "LOSE";
			}
			else if (enemy.GetHealth() == 0)
			{
				isGameOver = true;
				std::cout << std::endl << "WIN";
			}

			input->ResetInput();
		}
	}

	while (1);

	return 0;
}