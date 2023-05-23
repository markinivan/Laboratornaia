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
#include <Reserv.h>

class Reserves {
	Reserv* archive;
	int count;
	int size;
public:
	Reserves();
	~Reserves();
	void add(Reserv& obj);
	int* ReservSearchRoom(int _room) const;
	int* ReservSearchClient(Person& _client) const;
	int* ReservSearchArrival(Time& _arrival) const;
	int* ReservSearchDeparture(Time& _departure) const;
	bool AddReserv(Reserv& _reserv);
	void DelReserv(int a);
};
