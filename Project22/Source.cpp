#include <iostream>
#include <clocale>
#include <Windows.h>
#include"myConstant.h"
#include"fall_calc.h"
#include"cout_fall_calc.h"

int main() {
	setlocale(LC_ALL, "Rus");
	while (true) {
		std::cout << "Шарик падает с башни с ускорением свободного падения g = " << C_AccOfGrav;
		std::cout << " с башни высотой, которую задаёт пользователь.\n";
		std::cout << "Программа выводит высоту, на которрой будет находится шарик спустя каждую секунду." << std::endl;
		std::cout << "Введите высоту башни:" << std::endl;
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
			std::cout << "Введённое значение некорректно." << std::endl;
			Sleep(5000);
			system("cls");
		}
	}
}