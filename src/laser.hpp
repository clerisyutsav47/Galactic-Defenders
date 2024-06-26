#pragma once

#include <raylib.h>

class  Laser {
private:
	Vector2 position;
	int speed;
	Texture2D image;
	
public:
	Laser(Vector2 position, int speed, const char* path);
	void draw();
	void move();
	bool active;

};
