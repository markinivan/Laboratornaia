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

#include "Reserv.h"

class Reserves {
	Reserv* archive;
	int count;
	int size;
public:
	Reserves();
	~Reserves();
	void add(Reserv& obj);
	void ReservSearchRoom(int _room, int tmp[5]) const;
	void ReservSearchClient(Person& _client, int tmp[5]) const;
	void ReservSearchArrival(Time& _arrival, int tmp[5]) const;
	void ReservSearchDeparture(Time& _departure, int tmp[5]) const;
	bool AddReserv(Reserv& _reserv);
	void DelReserv(int a);
	Reserv ReservOutput(int a);
};
