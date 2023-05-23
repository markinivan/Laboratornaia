#pragma once
#include <math.h>
#include <locale>
#include <stdio.h>
#include <string>
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstdlib>

class Time {
	int day;
	int month;
	int year;
	int minutes;
	int hours;
public:
	Time(std::string input);
	Time(int _day = 1, int _month = 1, int _year = 1979, int _minutes = 0, int _hours = 0);
	Time(const Time& copy);
	~Time();
	Time& operator=(const Time& right);
	bool operator==(const Time& right) const;
	bool operator<(const Time& right) const;
	bool operator>(const Time& right) const;
private:
	bool check();
};