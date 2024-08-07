#include "laser.hpp"
#include <iostream>

Laser::Laser(Vector2 position, int speed, const char *path)
{
	image = LoadTexture(path);
	this->speed = speed;
	this->position = position;
	active = true;
}

void Laser::Draw()
{
	if (active)
	{
		DrawTextureV(image, position, WHITE);
	}
}

void Laser::Move()
{
	position.y += speed;
	if (position.y < 0 || position.y >= GetScreenHeight())
	{
		active = false;
	}
}

Rectangle Laser::GetRectangle()
{
    Rectangle rect;
    rect.x = position.x;
    rect.y = position.y;
    rect.width = image.width;
    rect.height = image.height;
    return rect;
}
