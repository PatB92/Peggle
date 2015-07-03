#pragma once

#include "Sprite.h"
#include "RessourceIDs.h"

class Ball :
	public Sprite
{
public:
	Ball();
	Ball(float x, float y, float angle);
	~Ball();

	void Update();

private:
	float angle;
	float speed;
};

