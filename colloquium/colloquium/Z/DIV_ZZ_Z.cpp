#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "longInteger.h"
#include "../Z/longIntFunctions.h"
#include "../N/longNatFunctions.h"
#include "../N/helpFunctions.h"

LNGINT DIV_ZZ_Z(LNGINT divident, LNGINT divider)
{
	LNGINT ans, ed;
	ed.sign = 0;
	ed.n = 1;
	ed.A = (int*)malloc(sizeof(int));
	ed.A[0] = 1;
	int err = 0;
	if (divident.A[0] != 0) {
		if (divident.A && divider.A)
		{
			LNGNT a, b, k;
			a = ABS_Z_N(divident);
			b = ABS_Z_N(divider);
			k = MOD_NN_N(a, b);
			if (COM_NN_D(a, b) == 1)swapN(&a, &b);
			a = DIV_NN_N(a, b);
			ans = TRANS_N_Z(a);
			if (divident.sign == 1 && k.A[0] != 0) ans = ADD_ZZ_Z(ans, ed);
			ans.sign = (!divider.sign && divident.sign) || (!divident.sign && divider.sign);
			return ans;
		}
		else
			err = 1;

		if (err)
			std::cout << "������, ����� �� ����������!";
	}
	ed.A[0] = 0;
	ans = ed;
	return ans;
}