/*
LeapYears.cpp
Author : Andre Da Silva
Class : ECET 344 - 001
Date : 10 / 24 / 19
Description : This program will calculate if a year is a leap year or not.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	int year;
	int leapyearcount;

	cout << "Please enter a valid year on the gregorian calander (1582+)" << endl;
	cin >> year;
	leapyearcount = (((year - 1584) / 4) + 1);

	if (year >= 1582) {
		if (year % 4 == 0) {
			switch (year % 100 != 0) {
				case 1:
					cout << "Leap Year!" << endl;
					cout << "This is the " << leapyearcount << "(st/nd/rd/th) year that is a leapyear." << endl;
					break;
				case 0:
					if (year % 400 == 0) {

						cout << "Leap Year!" << endl;
						cout << "This is the " << leapyearcount << " year that is a leap year." << endl;
					}
					else {

						cout << "Regular Year" << endl;

					}
					break;
			}	
		}
		else {
			cout << "Regular Year" << endl;
		}
	}
	else {
		cout << "ERROR: Invalid year! Please choose a year equal to or after 1582!" << endl;
	}

	system("PAUSE");
	return 0;

}

