#include<iostream>

void cout_fall(double res, int sec) {
	if (res <= 0) {
		std::cout << "����� �� " << sec << "-� ������� ��������� �� �����." << std::endl;
	}
	else
	{
		std::cout << "����� �� " << sec << "-� ������� ��������� �� ������: " << res << std::endl;
	}
}
