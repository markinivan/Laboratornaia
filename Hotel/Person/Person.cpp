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
	Person(FIO _name, Time _birthday, std::string _number) : name(_name), birthday(_birthday), number(_number) {};
	Person() : name(), birthday(), number("") {}
	Person(const Person& copy) {
		this->name = copy.name;
		this->birthday = copy.birthday;
		this->number = copy.number;
	}
	void setPerson(FIO _name, Time _birthday, std::string _number) {
		name = _name;
		birthday = _birthday;
		number = _number;
	}
	FIO getName() {
		return this->name;
	}
	~Person() {}

	Person& operator=(const Person& right) {
		if (not(*this == right)) {
			this->name = right.name;
			this->birthday = right.birthday;
			this->number = right.number;
		}
		return *this;
	}
	bool operator==(const Person& right) {
		if (this->name == right.name && this->birthday == right.birthday && this->number == right.number) {
			return true;
		}
		else {
			return false;
		}
	}
};