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
class FIO {
	std::string firstName;
	std::string secondName;
	std::string lastName;
public:
	FIO(std::string _firstName = "", std::string _secondName = "", std::string _lastName = "");
	FIO(const FIO& copy);
	~FIO();

	void setLastName(std::string input);
	void setSecondName(std::string input);
	void setFirstName(std::string input);

	FIO& operator=(const FIO& right);
	bool operator==(const FIO& right) const;
	bool operator>(const FIO& right) const;
	bool operator<(const FIO& right) const;
	friend std::ostream& operator<<(std::ostream&, const FIO&);
	friend std::istream& operator>>(std::istream&, FIO&);

private:
	void fix();
};