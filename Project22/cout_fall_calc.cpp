#include<iostream>

void cout_fall(double res, int sec) {
	if (res <= 0) {
		std::cout << "Шарик на " << sec << "-й секунде находится на земле." << std::endl;
	}
	else
	{
		std::cout << "Шарик на " << sec << "-й секунде находится на высоте: " << res << std::endl;
	}
}
