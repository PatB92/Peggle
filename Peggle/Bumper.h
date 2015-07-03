#pragma once

#include "Sprite.h"
#include "RessourceIDs.h"


class Bumper :
	public Sprite
{
public:
	Bumper();
	Bumper(float x, float y);
	~Bumper();

	void Update();
};

