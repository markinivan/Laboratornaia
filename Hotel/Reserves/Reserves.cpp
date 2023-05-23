#include "Reserves.h"


Reserves::Reserves() {
	archive = new Reserv[100];
	count = 0;
	size = 100;
}

Reserves::~Reserves() { delete[] archive; }

void Reserves::add(Reserv& obj) {
	if (this->count < this->size) {
		this->archive[this->count++] = obj;
	}
	else {
		Reserv* copy = new Reserv[size + 10];
		for (int i = 0; i < size; i++) {
			copy[i] = this->archive[i];
		}
		delete[]this->archive;
		this->archive = copy;
		size += 10;

		this->archive[this->count++] = obj;
	}
}

int* Reserves::ReservSearchRoom(int _room) const {
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

int* Reserves::ReservSearchClient(Person& _client) const {
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

int* Reserves::ReservSearchArrival(Time& _arrival) const {
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

int* Reserves::ReservSearchDeparture(Time& _departure) const {
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

bool Reserves::AddReserv(Reserv& _reserv) {
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

void Reserves::DelReserv(int a) {
	for (int i = a; i < count; i++) {
		archive[i] = archive[i + 1];
	}
	count -= 1;
}