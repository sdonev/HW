// homework1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n,num,sum=0,counter=0;
	cout << "How many numbers: ";
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		do {
			cout << "Enter a number between 10-5555: ";
			cin >> n;
			if (n < 10 || n>5555) {
				cout << "Not a valid number!" << endl;
			}
		} while (n < 10 || n>5555);
		if (n >= 10 && n <= 5555) {

			sum = sum + n;
     }

	}
	cout << sum << endl;
    return 0;
}

