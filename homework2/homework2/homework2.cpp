// homework2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int naturalN,number=0,sum=0,average;
	cin >> naturalN;
	while (naturalN >= 1 && naturalN <= 200) {
		if (naturalN < 1) {
			break;
		}
		number++;
		sum = naturalN + naturalN++;
		average = (naturalN + naturalN++) / number;
		cout << "Number:" << number << endl;
		cout << "Sum:" << sum << endl;
		cout << "Average number:" << average << endl;
		

	}
		

    return 0;
}

