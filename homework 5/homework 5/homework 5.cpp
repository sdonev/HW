// homework 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int num=100,d1,d2,d3;

	
	while (num!=999) {
		d1 = num % 10;
		d2 = (num / 10) % 10;
		d3 = num / 100;
		if (d1==d2 ||d1==d3||d2==d3){
			num++;
			continue;
			
		}
		else {
			cout <<" | " << num;
			num++;
		}
	 }
	
	

    return 0;
}

