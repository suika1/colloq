#include <iostream>
#include <iomanip>
#include "../N/longNat.h"
#include "outputCom.h"
using namespace std;

void greeting() {
	cout << "**********COMPUTER ALGEBRA SYSTEM**********" << endl;
	cout << "This system affords you an opportunity of working with long numbers." << endl;
	
}

void hint() {
	cout << "Please choose number representation you need from the list below." << endl;
	cout << "N - natural numbers," << endl;
	cout << "Z - integer numbers," << endl;
	cout << "Q - fractions," << endl;
	cout << "P - polynoms," << endl;
	cout << "E - Exit." << endl;
	cout << "To select the representation you should write it`s letter to the console and press \"enter\" button." << endl;
	cout << "Notice! Letters are capital." << endl;
	cout << "Example: N" << endl;
}

void printError() {
	cout << "**********SORRY, BUT THIS IS ERROR**********" << endl;
	cout << "Print \"0\" if you want to go back in the begging, or try to print what you want more carefull." << endl;
	//������ ���������� ���� � ��������� � ������� ����
}

void printIN() {
	cout << "Please print the number." << endl;
}

void printFR() {
	cout << "Please print the fraction." << endl;
	cout << "Example: 1/2" << endl;
	cout << "Please notice there aren`t any spaces!" << endl;
}

void printPLN() {
	cout << "Please print the polynomial." << endl;
	cout << "Example: 3/2x^6+1/2x^3+2/1x^1-6/3" << endl;
	cout << "Please notice there aren`t any spaces!" << endl;
	cout << "Tap enter twice, after you write the polyomial into the console." << endl;
}