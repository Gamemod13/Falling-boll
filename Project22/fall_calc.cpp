#include<cmath>
#include"myConstant.h"


double fallCalc(double heigh, int sec) {
	double res(0);
	while (res >= 0)
	{
		res = heigh - (C_AccOfGrav * sec * sec);
		if (res < 0) {
			return 0;
		}
		int i = static_cast<int>(res);
		return res = round(res*10) / 10;
	}
}