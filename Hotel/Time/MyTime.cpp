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
#define DIGIT_INTERVAL 48

class Time {
	int day;
	int month;
	int year;
	int minutes;
	int hours;
public:
	Time(std::string input) {
		minutes = (input[0] - DIGIT_INTERVAL) * 10 + input[1] - DIGIT_INTERVAL;
		hours = (input[3] - DIGIT_INTERVAL) * 10 + input[4] - DIGIT_INTERVAL;
		day = (input[6] - DIGIT_INTERVAL) * 10 + input[7] - DIGIT_INTERVAL;
		month = (input[9] - DIGIT_INTERVAL) * 10 + input[10] - DIGIT_INTERVAL;
		year = (input[13] - DIGIT_INTERVAL) * 1000 + (input[14] - DIGIT_INTERVAL) * 100 + (input[15] - DIGIT_INTERVAL) * 10 + input[16] - DIGIT_INTERVAL;
	}
	Time(int _day = 1, int _month = 1, int _year = 1979, int _minutes = 0, int _hours = 0) : day(_day), month(_month), year(_year), minutes(_minutes), hours(_hours) {}
	Time(const Time& copy) {
		this->minutes = copy.minutes;
		this->hours = copy.hours;
		this->day = copy.day;
		this->month = copy.month;
		this->year = copy.year;
	}
	~Time() {}

	Time& operator=(const Time& right) {
		if (not(*this == right)) {
			this->minutes = right.minutes;
			this->hours = right.hours;
			this->day = right.day;
			this->month = right.month;
			this->year = right.year;
		}
		return *this;
	}

	bool operator==(const Time& right) const {
		if (this->day == right.day and this->month == right.month and this->year == right.year and this->minutes == right.minutes and this->hours == right.hours) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator<(const Time& right) const {
		if ((this->year < right.year) or (this->year == right.year and this->month < right.month) or (this->year == right.year and this->month == right.month and this->day < right.day) or (this->year == right.year and this->month == right.month and this->day == right.day and this->hours < right.hours) or (this->year == right.year and this->month == right.month and this->day == right.day and this->hours == right.hours and this->minutes < right.minutes)) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator>(const Time& right) const {
		if ((this->year > right.year) or (this->year == right.year and this->month > right.month) or (this->year == right.year and this->month == right.month and this->day > right.day) or (this->year == right.year and this->month == right.month and this->day == right.day and this->hours > right.hours) or (this->year == right.year and this->month == right.month and this->day == right.day and this->hours == right.hours and this->minutes > right.minutes)) {
			return true;
		}
		else {
			return false;
		}
	}

	friend std::ostream& operator<<(std::ostream&, Time&);
	friend std::istream& operator>>(std::istream&, Time&);

private:
	bool check() {
		if (0 < this->day and 32 > this->day and 0 < this->month and 13 > this->month and 0 < this->year) {
			return 1;
		}
		else {
			return 0;
		}
	}
};