#include <iostream>
#include <clocale>
#include"myConstant.h"
#include"fall_calc.h"
#include"cout_fall_calc.h"

int main() {
	setlocale(LC_ALL, "Rus");
	std::cout << "Шарик падает с башни с ускорением свободного падения g = "<<C_AccOfGrav;
	std::cout << " с башни высотой, которую задаёт пользователь.\n";
	std::cout << "Программа выводит высоту, на которрой будет находится шарик спустя каждую секунду." << std::endl;
	std::cout << "Введите высоту башни:" << std::endl;
	double height (0);
	std::cin >> height;
	std::cout << std::endl;
	int sec = 0;
	while (fallCalc(height,sec) > 0) {
		sec++;
		cout_fall(fallCalc(height,sec), sec);
	}
}