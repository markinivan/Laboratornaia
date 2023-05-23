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
#include <FIO.h>
#include <MyTime.h>

class Person {
protected:
	FIO name;
	Time birthday;
	std::string number;
public:
	Person(FIO _name, Time _birthday, std::string _number);
	Person();
	Person(const Person& copy);
	void setPerson(FIO _name, Time _birthday, std::string _number);
	FIO getName();
	~Person();
	Person& operator=(const Person& right);
	bool operator==(const Person& right);
};