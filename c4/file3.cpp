#include "head.h"
#include <iostream>
#include <array>
#include <cmath>
#include <stdlib.h>
#include <time.h>
int main() {
	using std::cout;
	using std::cin;
	using std::rand;
	srand((unsigned)time(NULL));
	int count = 0;
	double ar[SALES::QUARTERS];
	SALES::Sales* sa = new SALES::Sales[2];
	for (int i = 0; i < SALES::QUARTERS; i++) {
		ar[i] = rand();
	}

	SALES::setSales(sa[0], ar, count);
	SALES::setSales(sa[1]);
	SALES::showSales(sa[0]);
	SALES::showSales(sa[1]);
}