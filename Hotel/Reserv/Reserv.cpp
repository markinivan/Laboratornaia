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
#include "Reserv.h"


Reserv::Reserv(Room& _room, Person& _client, Time& _arrival, Time& _departure) : room(_room), client(_client), arrival(_arrival), departure(_departure) {}

Reserv::Reserv() : room(), client(), arrival(), departure() {}

Reserv::Reserv(Reserv& copy) : room(copy.room), client(copy.client), arrival(copy.arrival), departure(copy.departure) {}

void Reserv::setReserv(Room& _room, Person& _client, Time& _arrival, Time& _departure) {
	room = _room;
	client = _client;
	arrival = _arrival;
	departure = _departure;
}

Room& Reserv::getRoom() {
	return this->room;
}

Time& Reserv::getATime() {
	return this->arrival;
}

Time& Reserv::getDTime() {
	return this->departure;
}

Person& Reserv::getClient() {
	return this->client;
}

void Reserv::setATime(Time& _arrival) {
	this->arrival = _arrival;
}

void Reserv::setDTime(Time& _departure) {
	this->departure = _departure;
}

void Reserv::setRoom(Room& _room) {
	this->room = _room;
}

void Reserv::setClient(Person& _client) {
	this->client = _client;
}
