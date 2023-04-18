#include <math.h>
#include <locale>
#include <stdio.h>
#include <string>
#include <windows.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <algorithm>

#define DIGIT_INTERVAL 48;

class FIO {
	std::string firstName;
	std::string secondName;
	std::string lastName;
public:
	FIO(std::string _firstName, std::string _secondName, std::string _lastName) : firstName(_firstName), secondName(_secondName), lastName(_lastName) {}
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
	friend std::istream& operator>>(std::istream&, const FIO&);

private:
	void fix(){
		transform(firstName.begin(), firstName.end(), firstName.begin(), tolower);
		transform(secondName.begin(), secondName.end(), secondName.begin(), tolower);
		transform(lastName.begin(), lastName.end(), lastName.begin(), tolower);
	}
};

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
		day = (input[6] - 48) * 10 + input[7] - DIGIT_INTERVAL; //?
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
		if ((this->year < right.year) or (this->year == right.year and this->month < right.month) or (this->year == right.year and this->month == right.month and this->day < right.day) or (this->year == right.year and this->month == right.month and this->day == right.day and this->hours < right.hours) or (this->year == right.year and this->month == right.month and this->day == right.day and this->hours == right.hours and this->minutes < right.minutes))  {
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

	friend std::ostream& operator<<(std::ostream&, const Time&);
	friend std::istream& operator>>(std::istream&, const Time&);

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

class Person {
protected:
	FIO name;
	Time birthday;
	std::string number;
public:
	Person(FIO _name, Time _birthday, std::string _number) : name(_name), birthday(_birthday), number(_number) {};
	Person(const Person& copy) {
		this->name = copy.name;
		this->birthday = copy.birthday;
		this->number = copy.number;
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
		if (this->name == right.name and this->birthday == right.birthday and this->number == right.number) {
			return true;
		}
		else {
			return false;
		}
	}
};

enum Category {econom, standart, luxury };
	class Room {
		Person client;
		int price;
		int ID;
		Category category;
		Time arrival;
		Time departure;
	public:
		Room();
		Room(Person _client, int _price = 10000, int _ID, Category _category = econom, Time _arrival, Time _departure) : client(_client), price(_price), ID(_ID), category(_category), arrival(_arrival), departure(_departure) {};
		Room(const Room& copy) {
			this->client = copy.client;
			this->price = copy.price;
			this->ID = copy.ID;
			this->category = copy.category;
			this->arrival = copy.arrival;
			this->departure = copy.departure;
		}
		~Room() {}
		
		Room& operator=(Room& right) {
			if (not(*this == right)) {
				this->client = right.client;
				this->price = right.price;
				this->ID = right.ID;
				this->category = right.category;
				this->arrival = right.arrival;
				this->departure = right.departure;
			}
			return *this;
		}
		bool operator==(Room& right) {
			if (this->client == right.client and this->price == right.price and this->ID == right.ID and this->category == right.category and this->arrival == right.arrival and this->departure == right.departure) {
				return true;
			}
			return false;
		}
	};
	class Rooms {
		Room* archive;
		int count;
		int size;
	public:
		Rooms() { archive = new Room[100]; count = 0; size = 100; }
		~Rooms() { delete[] archive; }
		bool add();
		bool del(Room&);
		Room& find(Room&);
		Room& find(Room&);
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
