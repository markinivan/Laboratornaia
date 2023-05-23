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
#include <MyTime.h>
#include <Room.h>
#include <Person.h>

class Reserv {
	Room room;
	Person client;
	Time arrival;
	Time departure;
public:
	Reserv(Room& _room, Person& _client, Time& _arrival, Time& _departure) : room(_room), client(_client), arrival(_arrival), departure(_departure) {}
	Reserv() : room(), client(), arrival(), departure() {};
	Reserv(Reserv& copy) : room(copy.room), client(copy.client), arrival(copy.arrival), departure(copy.departure) {}
	void setReserv(Room& _room, Person& _client, Time& _arrival, Time& _departure) {
		room = _room;
		client = _client;
		arrival = _arrival;
		departure = _departure;
	}
	Room& getRoom() {
		return this->room;
	}
	Time& getATime() {
		return this->arrival;
	}
	Time& getDTime() {
		return this->departure;
	}
	Person& getClient() {
		return this->client;
	}
	void setATime(Time& _arrival) {
		this->arrival = _arrival;
	}
	void setDTime(Time& _departure) {
		this->departure = _departure;
	}
	void setRoom(Room& _room) {
		this->room = _room;
	}
	void setClient(Person& _client) {
		this->client = _client;
	}
};