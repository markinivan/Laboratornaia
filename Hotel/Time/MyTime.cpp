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

#include "MyTime.h"
#define DIGIT_INTERVAL 48

Time::Time(std::string input) {
	minutes = (input[0] - DIGIT_INTERVAL) * 10 + input[1] - DIGIT_INTERVAL;
	hours = (input[3] - DIGIT_INTERVAL) * 10 + input[4] - DIGIT_INTERVAL;
	day = (input[6] - DIGIT_INTERVAL) * 10 + input[7] - DIGIT_INTERVAL;
	month = (input[9] - DIGIT_INTERVAL) * 10 + input[10] - DIGIT_INTERVAL;
	year = (input[12] - DIGIT_INTERVAL) * 1000 + (input[13] - DIGIT_INTERVAL) * 100 + (input[14] - DIGIT_INTERVAL) * 10 + input[15] - DIGIT_INTERVAL;
}
Time::Time(int _day, int _month, int _year , int _minutes, int _hours) : day(_day), month(_month), year(_year), minutes(_minutes), hours(_hours) {}
Time::Time(const Time& copy) {
	this->minutes = copy.minutes;
	this->hours = copy.hours;
	this->day = copy.day;
	this->month = copy.month;
	this->year = copy.year;
}
Time::~Time() {}

Time& Time::operator=(const Time& right) {
	if (not(*this == right)) {
		this->minutes = right.minutes;
		this->hours = right.hours;
		this->day = right.day;
		this->month = right.month;
		this->year = right.year;
	}
	return *this;
}

bool Time::operator==(const Time& right) const {
	if (this->day == right.day and this->month == right.month and this->year == right.year and this->minutes == right.minutes and this->hours == right.hours) {
		return true;
	}
	else {
		return false;
	}
}
bool Time::operator<(const Time& right) const {
	if ((this->year < right.year) or (this->year == right.year and this->month < right.month) or (this->year == right.year and this->month == right.month and this->day < right.day) or (this->year == right.year and this->month == right.month and this->day == right.day and this->hours < right.hours) or (this->year == right.year and this->month == right.month and this->day == right.day and this->hours == right.hours and this->minutes < right.minutes)) {
		return true;
	}
	else {
		return false;
	}
}
bool Time::operator>(const Time& right) const {
	if ((this->year > right.year) or (this->year == right.year and this->month > right.month) or (this->year == right.year and this->month == right.month and this->day > right.day) or (this->year == right.year and this->month == right.month and this->day == right.day and this->hours > right.hours) or (this->year == right.year and this->month == right.month and this->day == right.day and this->hours == right.hours and this->minutes > right.minutes)) {
		return true;
	}
	else {
		return false;
	}

}
std::string Time::Output() {
	std::string minutes = std::to_string(this->minutes);
	std::string hours = std::to_string(this->hours);
	std::string day = std::to_string(this->day);
	std::string month = std::to_string(this->month);
	std::string year = std::to_string(this->year);
	if (this->minutes < 10) {
	minutes = "0" + std::to_string(this->minutes);
	}
	if (this->hours < 10) {
	hours = "0" + std::to_string(this->hours);
	}
	if (this->day < 10) {
	day = "0" + std::to_string(this->day);
	}
	if (this->month < 10) {
	month = "0" + std::to_string(this->month);
	}
	std::string out = hours + ":" + minutes + "/" + day + "." + month + "." + year;
	return out;

}
bool Time::check() const {
	if (0 < this->day && 32 > this->day && 0 < this->month && 13 > this->month && 0 < this->year) {
		return 1;
	}
	else {
		return 0;
	}
	
	}