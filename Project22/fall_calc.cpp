#include"myConstant.h"

float fallCalc(double heigh) {
	for (int i = 0; i < 6; i++) {
		float res = C_AccOfGrav * i * i;
		if (res >= 0) {
			return res;
		}
	}
}