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

#include "Room.h"

Room::Room(int _ID, int _price, Category _category, bool _booking) :price(_price), ID(_ID), category(_category), booking(_booking) {};
Room::Room(const Room& copy) {
	this->price = copy.price;
	this->ID = copy.ID;
	this->category = copy.category;
	this->booking = copy.booking;
}
void Room::setRoom(int _price, int _ID, Category _category, bool _booking) {
	price = _price;
	ID = _ID;
	category = _category;
	booking = _booking;
}
int Room::getID() const {
	return this->ID;
}
Room::~Room() {}
Room& Room::operator=(Room& right) {
	if (not(*this == right)) {
		this->price = right.price;
		this->ID = right.ID;
		this->category = right.category;
	}
	return *this;
}
bool Room::operator==(Room& right) {
	if (this->price == right.price && this->ID == right.ID && this->category == right.category) {
		return true;
	}
	return false;
}
Category Room::getCategory() {
	return this->category;
}