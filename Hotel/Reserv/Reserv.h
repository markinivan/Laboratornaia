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

#include "MyTime.h"
#include "Room.h"
#include "Person.h"

class Reserv {
	Room room;
	Person client;
	Time arrival;
	Time departure;
public:
	Reserv(Room& _room, Person& _client, Time& _arrival, Time& _departure);
	Reserv();
	Reserv(Reserv& copy);
	void setReserv(Room& _room, Person& _client, Time& _arrival, Time& _departure);
	Room& getRoom();
	Time& getATime();
	Time& getDTime();
	Person& getClient();
	void setATime(Time& _arrival);
	void setDTime(Time& _departure);
	void setRoom(Room& _room);
	void setClient(Person& _client);
};
