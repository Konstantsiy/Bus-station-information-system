#include "pch.h"
#include <locale.h>
#include <Windows.h>
#include <iostream>

using namespace std;

int EnterOption(int, int);
void userMenu();
void adminMenu();
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "");
	bool flag = true;
	while (flag) {
		system("cls");
		cout << "\t������� ����\n\n";
		cout << " 1. ����������� ���������� � ���������.\n";
		cout << " 2. �������� ���������� � ���������.\n";
		cout << " 0. ����� �� ���������.\n>";
		switch (EnterOption(0, 2)) {
		case 1:
			userMenu();
			break;
		case 2:
			adminMenu();
			break;
		case 0:
			system("cls");
			flag = false;
			break;
		}
	}
	return 0;
}
