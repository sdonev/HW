// homework7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	do {
		cout << "Enter a number between 10-200: ";
		cin >> n;
		if (n >= 10 && n <= 200) {
			for (int i = 200; i >= n; i--) {
				if (i % 7 == 0) {
					cout << i << endl;
				}

			}
		}
	} while (n < 10 || n>200);
    return 0;
}

