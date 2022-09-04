#include<iostream>
#include<string>
#include<conio.h>
#include<random>
using namespace std;

void main() {
	string name1;
	cout << "Enter name: "; cin >> name1; 
	int ideal[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int start[16] = {0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int random; bool f = true;
	for (int i = 0; i < 16; i++) 
		start[i] = 17;
	for (int i = 0; i < 15; i++)
		ideal[i] = i + 1;
	for (int i = 0; i < 16; i++) {
		random = rand() % 16;
		for (int j = 0; j < 16; j++) {
			if (start[j] == random) {
				f = false;
				break;
			}
		}
		while (not f) {
			f = true;
			random = rand() % 16;
			for (int j = 0; j < 16; j++) {
				if (start[j] == random) {
					f = false;
					break;
				}
			}
		}
		start[i] = random;
		f = true;
	}
	for (int i = 0; i < 16; i++)
		cout << start[i] << " ";
	cout << endl;
	int move;
	int x = 1, i0;
	while (start != ideal) {
		move = _getch();
		switch (move) {
			case 77:
				x += 1;
				if (x > 16) {
					x = 16;
					cout << "You exited from field";
				}
				cout << "Position = " << x << "\t" << start[x - 1] << endl;
				break;
			case 75:
				x -= 1;
				if (x < 1) {
					x = 1;
					cout << "You exited from field";
				}
				cout << "Position = " << x << "\t" << start[x - 1] << endl;
				break;
			case 13:
				for (int i = 0; i < 16; i++) {
					if (start[i] == 0)
						i0 = i;
				}
				start[i0] = start[x - 1];
				start[x - 1] = 0;
				for (int i = 0; i < 16; i++) {
					cout << start[i] << " ";
				}
				cout << endl;
				break;
		}
	}
	cout << name1 << " ,Поздравляем!";

}