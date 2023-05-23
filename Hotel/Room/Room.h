#pragma once
enum Category { econom, standart, luxury};
class Room {
	int price;
	int ID;
	Category category;
	bool booking;
public:
	Room(int _ID = 0, int _price = 1000, Category _category = econom, bool _booking = false);
	Room(const Room& copy);
	void setRoom(int _price, int _ID, Category _category, bool _booking);
	int getID() const;
	~Room();
	Room& operator=(Room& right);
	bool operator==(Room& right);
	Category getCategory();
};