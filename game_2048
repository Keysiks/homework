#include <iostream>
#include <string>
#include <math.h>
#include <random>
#include <Windows.h>
#include <conio.h>
using namespace std;

bool game_running() {
	int start_field[4][4] = { {0, 0, 0, 0}, {0, 0, 2, 0}, {0, 0, 0, 2}, {0, 0, 0, 0} };
	bool running = true;
	bool game_end = false;
	while (running) {
		setlocale(LC_ALL, "");
		system("cls");
		cout << "Привет, добро подаловать в мою версию игры 2048" << endl;
		cout << "Правила масимально простые, как не любит Олег Анатольевич):" << endl;
		cout << "\tВы можете двигать числа стрелками, либо комбинацией клавиш WASD" << endl << endl;
		setlocale(LC_ALL, "C");

		cout << "\t\t" << char(203);
		for (int i = 0; i < 29; i++)
			cout << char(205);
		cout << char(203) << endl << "\t\t";

		for (int i = 0; i < 4; i++) {
			cout << char(186);
			for (int j = 0; j < 4; j++) {
				cout.width(7);
				cout << start_field[i][j];
			}
			if (i != 3)
				cout << " " << char(186) << endl << "\t\t" << char(186) << "\t\t\t      " << char(186) << endl << "\t\t";
			else cout << " " << char(186) << endl;
		}
		cout << "\t\t" << char(202);
		for (int i = 0; i < 29; i++)
			cout << char(205);
		cout << char(202) << endl;
		int move = _getch();
		int position_1 = rand() % 4, position_2 = rand() % 4, position_3 = rand() % 4, position_4 = rand() % 4;
		while (start_field[position_1][position_2] != 0 and start_field[position_3][position_4] != 0 and position_1 != position_2 and position_3 != position_4) {
			position_1 = rand() % 4, position_2 = rand() % 4, position_3 = rand() % 4, position_4 = rand() % 4;
		}

		switch (move) {
		case 'w':
			break;
		case 's':
			break;
		case 'a':
			break;
		case 'd':
			break;
		}

		int choose = rand() % 5;
		int counter = 0;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (start_field[i][j] == 0) counter++;
			}
		}
		if (choose == 0) start_field[position_3][position_4] = 4;
		else start_field[position_3][position_4] = 2;
		if (counter == 0) running = false;
		else if (counter != 1) start_field[position_1][position_2] = 2;

	}
	return running;
}

//убрать break в конце основного цикла
void main() {
	setlocale(LC_ALL, "");
	game_running();
	bool f = true;
	while (f) {
		bool running = game_running;
		if (running)
			cout << "Поздравляем с выигрышем!";
		else cout << "К сожалению вы проиграли";
		int run_again;
		cout << "Если хотите начать снова нажмите esc, если не хотите, на любую клавишу.";

		run_again = _getch();
		if (run_again == 27)
			game_running();
		else f = false;
	}
			
}

