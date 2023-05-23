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
#include "Rooms.h"

#define HOTEL_SIZE 90
#define ECONOM_PRICE 1000
#define STANDART_PRICE 2000
#define LUXURY_PRICE 3000


Rooms::Rooms() {
	archive = new Room[HOTEL_SIZE];
	count = 0;
	size = HOTEL_SIZE;
	for (int i = 1; i < HOTEL_SIZE + 1; i++) {
		if (i <= HOTEL_SIZE / 3) {
			archive[i - 1].setRoom(ECONOM_PRICE, i, econom, false);
		}
		else if (i <= HOTEL_SIZE * 2 / 3) {
			archive[i - 1].setRoom(STANDART_PRICE, i, standart, false);
		}
		else {
			archive[i - 1].setRoom(LUXURY_PRICE, i, luxury, false);
		}
	}
}
Room& Rooms::RoomSearchID(int a) {
	for (int i = 0; i < size; i++) {
		if (archive[i].getID() == a) {
			return archive[i];
		}
	}
	Room s;
	return s;
}
int* Rooms::RoomSearchCategory(Category& _category) const {
	int tmp[5] = { -1, -1, -1, -1, -1 };
	for (int i = 0; i < size; i++) {
		if (archive[i].getCategory() == _category) {
			if (tmp[4] == -1) {
				tmp[0] = tmp[1];
				tmp[1] = tmp[2];
				tmp[2] = tmp[3];
				tmp[3] = tmp[4];
				tmp[4] = i;
			}
			else {
				if (archive[i].getID() < archive[(tmp[4])].getID())
				{
					tmp[0] = tmp[1];
					tmp[1] = tmp[2];
					tmp[2] = tmp[3];
					tmp[3] = tmp[4];
					tmp[4] = i;
				}
			}
		}
	}
	return tmp;
}
Rooms::~Rooms() { delete[] archive; }