#include <iostream>
#include "longPoly.h"
#include "../Q/longFracFunctions.h"
#include "longPolyFunctions.h"
/*
PLNM MOD_PP_P(PLNM first, PLNM second)
{
	PLNM ans;
	if (first.C && second.C) {
		ans = SUB_PP_P(first, MUL_PP_P(second, DIV_PP_P(first, second)));
		return ans;
	}
	else
		std::cout << "Многочлена не существует\n";
	return first;
}

*/