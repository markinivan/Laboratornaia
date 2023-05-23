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
#include <Reserv.h>
class Reserves {
	Reserv* archive;
	int count;
	int size;
public:
	Reserves() {
		archive = new Reserv[100];
		count = 0;
		size = 100;
	}
	~Reserves() { delete[] archive; }
	void add(Reserv& obj) {
		if (this->count < this->size) {
			this->archive[this->count++] = obj;
		}
		else {
			realloc(this->archive, size += 10);
			this->archive[this->count++] = obj;
		}
	}
	int* ReservSearchRoom(int _room) const {
		int tmp[5] = { -1, -1, -1, -1, -1 };
		for (int i = 0; i < size; i++) {
			if (archive[i].getRoom().getID() == _room) {
				if (tmp[4] == -1) {
					tmp[0] = tmp[1];
					tmp[1] = tmp[2];
					tmp[2] = tmp[3];
					tmp[3] = tmp[4];
					tmp[4] = i;
				}
				else {
					if (archive[i].getDTime() > archive[(tmp[4])].getDTime())
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
	int* ReservSearchClient(Person& _client) const {
		int tmp[5] = { -1, -1, -1, -1, -1 };
		for (int i = 0; i < size; i++) {
			if (archive[i].getClient() == _client) {
				if (tmp[4] == -1) {
					tmp[0] = tmp[1];
					tmp[1] = tmp[2];
					tmp[2] = tmp[3];
					tmp[3] = tmp[4];
					tmp[4] = i;
				}
				else {
					if (archive[i].getDTime() > archive[(tmp[4])].getDTime())
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
	int* ReservSearchArrival(Time& _arrival) const {
		int tmp[5] = { -1, -1, -1, -1, -1 };
		for (int i = 0; i < size; i++) {
			if (archive[i].getATime() == _arrival) {
				if (tmp[4] == -1) {
					tmp[0] = tmp[1];
					tmp[1] = tmp[2];
					tmp[2] = tmp[3];
					tmp[3] = tmp[4];
					tmp[4] = i;
				}
				else {
					if (archive[i].getDTime() > archive[(tmp[4])].getDTime())
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
	int* ReservSearchDeparture(Time& _departure) const {
		int tmp[5] = { -1, -1, -1, -1, -1 };
		for (int i = 0; i < size; i++) {
			if (archive[i].getDTime() == _departure) {
				if (tmp[4] == -1) {
					tmp[0] = tmp[1];
					tmp[1] = tmp[2];
					tmp[2] = tmp[3];
					tmp[3] = tmp[4];
					tmp[4] = i;
				}
				else {
					if (archive[i].getDTime() > archive[(tmp[4])].getDTime())
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
	bool AddReserv(Reserv& _reserv) {
		for (int i = 0; i < size; i++) {
			if (archive[i].getRoom() == _reserv.getRoom()) {
				if (((archive[i].getATime() > _reserv.getATime() || archive[i].getATime() == _reserv.getATime()) && (archive[i].getATime() < _reserv.getDTime() || archive[i].getATime() == _reserv.getDTime())) ||
					((archive[i].getDTime() > _reserv.getATime() || archive[i].getDTime() == _reserv.getATime()) && (archive[i].getDTime() < _reserv.getDTime() || archive[i].getDTime() == _reserv.getDTime())) ||
					((archive[i].getATime() < _reserv.getATime() || archive[i].getATime() == _reserv.getATime()) && (archive[i].getDTime() > _reserv.getDTime() || archive[i].getDTime() == _reserv.getDTime()))) {
					return 0;
				}
			}
		}
		add(_reserv);
		return 1;
	}
	void DelReserv(int a) {
		for (int i = a; i < count; i++) {
			archive[i] = archive[i + 1];
		}
		count -= 1;
	}
};