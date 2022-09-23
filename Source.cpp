#include <iostream>
#include <string>
#include <conio.h>
#include <random>
#include <Windows.h>
using namespace std;


void main() {
	int field[4][4] = { {9, 5, 7, 8}, {0, 2, 6, 1}, {14, 12, 3, 11}, {4, 10, 15, 13} };
	int ideal[4][4] = { {1, 2, 3, 4 }, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 0} };

	int counter = 0;
	int move, position_x = 0, position_y = 1;
	int i0, j0;
	while (ideal != field) {
		setlocale(LC_ALL, "");
		system("cls");
		cout << "Игра в пятнашки." << endl;
		cout << "Правила: " << endl;
		cout << "Вы можете двигать пустую клетку комбинацией клавиш WASD, за перделы поля выходить нельзя." << endl;
		cout << "Игра заканчивается, когда все числа упорядочены по возврастанию." << endl;
		cout << "\t" << "\t";
		cout << endl;
		cout << "\t\t";
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				cout << field[i][j] << "  ";
				if (field[i][j] < 10) {
					cout << " ";
				}
			}
			cout << endl << endl << "\t\t";
		}
		move = _getch();
		switch (move) {
		case -32: break;
		case 'w':
			if (position_y == 0)
				cout << "Enter other key" << endl;
			else
				position_y -= 1;
			break;
		case 's':
			if (position_y == 3)
				cout << "Enter other key" << endl;
			else
				position_y += 1;
			break;
		case 'd':
			if (position_x == 3)
				cout << "Enter other key" << endl;
			else
				position_x += 1;
			break;
		case 'a':
			if (position_x == 0)
				cout << "Enter other key" << endl;
			else
				position_x -= 1;
			break;
		default:
			break;
		}
		Sleep(100);
		int x = field[position_y][position_x];
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (field[i][j] == 0) {
					j0 = j;
					i0 = i;
					break;
				}
			}
		}
		field[position_y][position_x] = 0;
		field[i0][j0] = x;
		counter += 1;
	}
	setlocale(LC_ALL, "");
	cout << endl;
	cout << "Количество ходов: " << counter << endl;
	cout << "Поздравляем! Вы победили!";
}