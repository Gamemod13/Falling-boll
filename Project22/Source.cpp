#include <iostream>
#include <clocale>
#include <Windows.h>
#include"myConstant.h"
#include"fall_calc.h"
#include"cout_fall_calc.h"

int main() {
	setlocale(LC_ALL, "Rus");
	while (true) {
		std::cout << "����� ������ � ����� � ���������� ���������� ������� g = " << C_AccOfGrav;
		std::cout << " � ����� �������, ������� ����� ������������.\n";
		std::cout << "��������� ������� ������, �� �������� ����� ��������� ����� ������ ������ �������." << std::endl;
		std::cout << "������� ������ �����:" << std::endl;
		double height(0);
		std::cin >> height;
		std::cout << std::endl;
		if (height >= 0) {
			int sec = 0;
			while (fallCalc(height, sec) > 0) {
				sec++;
				cout_fall(fallCalc(height, sec), sec);
			}
			Sleep(5000);
			exit(0);
			break;
		}
		else {
			std::cout << "�������� �������� �����������." << std::endl;
			Sleep(5000);
			system("cls");
		}
	}
}