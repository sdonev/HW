// homework6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int n, r,s, sum = 0, counter = 10;
	do {
		cout << "Enter a number between 10-99: ";
		cin >> n;
		if (n >= 10 && n <= 99) {
			while (counter <= n) {
				r = counter % 10;
				s = counter / 10;
				sum = sum + r + s;
				counter++;
			}
		}
	} while (n < 10 || n > 99);
	

	cout << sum << endl;
	return 0;
}