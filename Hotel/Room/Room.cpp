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

enum Category { econom, standart, luxury };
class Room {
	int price;
	int ID;
	Category category;
	bool booking;
public:
	Room(int _ID = 0, int _price = 1000, Category _category = econom, bool _booking = false) :price(_price), ID(_ID), category(_category), booking(_booking) {};
	Room(const Room& copy) {
		this->price = copy.price;
		this->ID = copy.ID;
		this->category = copy.category;
		this->booking = copy.booking;
	}
	void setRoom(int _price, int _ID, Category _category, bool _booking) {
		price = _price;
		ID = _ID;
		category = _category;
		booking = _booking;
	}
	int getID() const {
		return this->ID;
	}
	~Room() {}
	Room& operator=(Room& right) {
		if (not(*this == right)) {
			this->price = right.price;
			this->ID = right.ID;
			this->category = right.category;
		}
		return *this;
	}
	bool operator==(Room& right) {
		if (this->price == right.price && this->ID == right.ID && this->category == right.category) {
			return true;
		}
		return false;
	}
	Category getCategory() {
		return this->category;
	}
};