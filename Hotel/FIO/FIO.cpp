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
	FIO(std::string _firstName = "", std::string _secondName = "", std::string _lastName = "") : firstName(_firstName), secondName(_secondName), lastName(_lastName) {}
	FIO(const FIO& copy) {
		this->firstName = copy.firstName;
		this->secondName = copy.secondName;
		this->lastName = copy.lastName;
	}
	~FIO() {}

	void setLastName(std::string input) {
		this->lastName = input;
	}
	void setSecondName(std::string input) {
		this->secondName = input;
	}
	void setFirstName(std::string input) {
		this->firstName = input;
	}

	FIO& operator=(const FIO& right) {
		if (not(*this == right)) {
			this->firstName = right.firstName;
			this->secondName = right.secondName;
			this->lastName = right.lastName;
		}
		return *this;
	}

	bool operator==(const FIO& right) const {
		if (this->firstName == right.firstName and this->secondName == right.secondName and this->lastName == right.lastName) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator>(const FIO& right) const {
		if ((this->secondName > right.secondName) or (this->secondName == right.secondName and this->firstName > right.firstName) or (this->secondName == right.secondName and this->firstName == right.firstName and this->lastName > right.lastName)) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator<(const FIO& right) const {
		if ((this->secondName < right.secondName) or (this->secondName == right.secondName and this->firstName < right.firstName) or (this->secondName == right.secondName and this->firstName == right.firstName and this->lastName < right.lastName)) {
			return true;
		}
		else {
			return false;
		}
	}

	friend std::ostream& operator<<(std::ostream&, const FIO&);
	friend std::istream& operator>>(std::istream&, FIO&);

private:
	void fix() {
		transform(firstName.begin(), firstName.end(), firstName.begin(), tolower);
		transform(secondName.begin(), secondName.end(), secondName.begin(), tolower);
		transform(lastName.begin(), lastName.end(), lastName.begin(), tolower);
	}

};
std::ostream& operator<<(std::ostream& out, const FIO& obj)
{
	out << obj.secondName << obj.firstName << obj.lastName;
	return out;
}
std::istream& operator>>(std::istream& in, FIO& obj)
{
	in >> obj.secondName >> obj.firstName >> obj.lastName;
	return in;
}
