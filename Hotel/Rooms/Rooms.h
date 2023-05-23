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
#include <Room.h>

class Rooms {
	Room* archive;
	int count;
	int size;
public:
	Rooms();
	Room& RoomSearchID(int a);
	int* RoomSearchCategory(Category& _category) const;
	~Rooms();
};