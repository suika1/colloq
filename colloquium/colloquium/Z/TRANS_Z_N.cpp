#include <stdlib.h>
#include <iostream>
#include "../N/longNat.h"
#include "longInteger.h"
#include "../Z/longIntFunctions.h"
using namespace std;

LNGNT TRANS_Z_N(LNGINT numb)
{
	LNGNT outNumb;
	if (numb.A)
		if (numb.sign == 0)
		{
			outNumb.n = numb.n;
			outNumb.A = (int*)malloc(outNumb.n * sizeof(int));
			for (int i = 0; i < outNumb.n; i++)
				outNumb.A[i] = numb.A[i];
		}
		else
			cout<<"������� ������������� �����, �������� �� ����� ���� ���������";
	else
		cout<<"\n������, ����� �� ����������!\n";
	return outNumb;
}
