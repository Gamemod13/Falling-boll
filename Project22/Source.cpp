#include <iostream>
#include <clocale>
#include"myConstant.h"
#include"fall_calc.h"
#include"cout_fall_calc.h"

int main() {
	setlocale(LC_ALL, "Rus");
	std::cout << "����� ������ � ����� � ���������� ���������� ������� g = "<<C_AccOfGrav;
	std::cout << " � ����� �������, ������� ����� ������������.\n";
	std::cout << "��������� ������� ������, �� �������� ����� ��������� ����� ������ ������ �������." << std::endl;
	std::cout << "������� ������ �����:" << std::endl;
	double height (0);
	std::cin >> height;
	std::cout << std::endl;
	int sec = 0;
	while (fallCalc(height,sec) > 0) {
		sec++;
		cout_fall(fallCalc(height,sec), sec);
	}
}