// swapNumbers.cpp : Defines the entry point for the application.
//

#include "swapNumbers.h"

using namespace std;

void swapNumber(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	swapNumber(&a, &b);
	cout << a << '\t' << b << endl;
	return 0;
}
