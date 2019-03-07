#include "head.h"
#include <iostream>

namespace SALES {
	using std::cout;
	using std::cin;
	using std::endl;
	//copies the lesser of 4 or n items from the array ar
	//to the sales member of s and computers and stores the 
	//average,maximum,and minimum values of the entered items;
	//remaining elements of sales, if any, set to 0
	void setSales(Sales& s, const double ar[], int n) {
		cout << "Before organize data: " << endl;
		for (int i = 0; i < QUARTERS; i++) {
			cout << "Sales " << i + 1 << " : " << ar[i] << endl;
		}
		s.max = 0;
		s.min = 0;
		s.average = 0;
		cout << "MAX: " << s.max << endl;
		cout << "MIN: " << s.min<< endl;
		cout << "AVG: " << s.average << endl << endl;
		
		s.max = ar[0];
		s.min = ar[0];

		for (int i = 0; i < QUARTERS; i++) {
			
			if (ar[i] > s.max) 
				s.max = ar[i];
			
			if (ar[i] < s.min) 
				s.min = ar[i];

			s.sales[i] = ar[i];
		}

		double sum = 0;
		for (int i = 0; i < QUARTERS; i++) {
			sum += ar[i];
			if (s.sales[i] != s.max && s.sales[i] != s.min)
				s.sales[i] = 0;
		}
		
		s.average = sum / 4;
		cout << "After organize data: " << endl;
		for (int i = 0; i < QUARTERS; i++) {
			cout << "Sales " << i + 1 << " : " << s.sales[i] << endl;
		}
		cout << "MAX: " << s.max << endl;
		cout << "MIN: " << s.min << endl;
		cout << "AVG: " << s.average << endl << endl;
	}

	//gathers sales for 4 quarters interactively,stores them
	//in the sales munber of s and computers and stores the
	//average,maximum,and minimum values
	void setSales(Sales& s) {
		cout << "Enter the first sales amount: ";
		cin >> s.sales[0];
		cout << "Enter the second sales amount: ";
		cin >> s.sales[1];
		cout << "Enter the third sales amount: ";
		cin >> s.sales[2];
		cout << "Enter the fouth sales amount: " << endl;
		cin >> s.sales[3];

		s.max = 0;
		s.min = 0;
		s.average = 0;

		cout << "Before organize data: " << endl;
		for (int i = 0; i < QUARTERS; i++) {
			cout << "Sales " << i + 1 << " : " << s.sales[i] << endl;
		}
		cout << "MAX: " << s.max << endl;
		cout << "MIN: " << s.min << endl;
		cout << "AVG: " << s.average << endl << endl;

		s.average = s.sales[0];
		s.max = s.sales[0];
		s.min = s.sales[0];

		for (int i = 0; i < QUARTERS; i++) {

			if (s.sales[i] > s.max)
				s.max = s.sales[i];

			if (s.sales[i] < s.min)
				s.min = s.sales[i];

			s.sales[i] = s.sales[i];
		}

		
		double sum=0;
		for (int i = 0; i < QUARTERS; i++) {
			sum += s.sales[i];
			if (s.sales[i] != s.max && s.sales[i] != s.min)
				s.sales[i] = 0;
		}
		s.average = sum / 4;
		cout << "After organize data: " << endl;
		for (int i = 0; i < QUARTERS; i++) {
			cout << "Sales " << i + 1 << " : " << s.sales[i] << endl;
		}
		cout << "MAX: " << s.max << endl;
		cout << "MIN: " << s.min << endl;
		cout << "AVG: " << s.average << endl << endl;
	}

	//display all information in structre s
	void showSales(const Sales& s) {
		for (int i = 0; i < QUARTERS; i++) {
			cout << "Sales " << i + 1 << " : " << s.sales[i] << endl;
		}
		cout << "MAX: " << s.max << endl;
		cout << "MIN: " << s.min<< endl;
		cout << "AVG: " << s.average << endl << endl;
	}
}