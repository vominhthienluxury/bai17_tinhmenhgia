// bai17_tinhmenhgia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int menhgia, sotien, so, to500, to200, to100, to50, to20, to10, to1;
	cout << "so to tien:\n"; cin >> sotien;
	to500 = sotien / 500;
	sotien = sotien % 500;
	cout << "soto 500 : " << to500;

	to200 = sotien / 200;
	sotien = sotien % 200;
	cout << "\nsoto 200 : " << to200;

	to100 = sotien / 100;
	sotien = sotien % 100;
	cout << "\nsoto 100 : " << to100;

	to50 = sotien / 50;
	sotien = sotien % 50;
	cout << "\nsoto 50 : " << to50;

	to20 = sotien / 20;
	sotien = sotien % 20;
	cout << "\nsoto 20 : " << to20;


	to10 = sotien / 10;
	sotien = sotien % 10;
	cout << "\nsoto 10 : " << to10;

	to1 = sotien / 1;
	sotien = sotien % 1;
	cout << "\nsoto 1 : " << to1;
	return 0;
}
