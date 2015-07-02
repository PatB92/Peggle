#pragma once

#include "Sprite.h"
#include "RessourceIDs.h"

class Basket :
	public Sprite
{
public:
	Basket();
	Basket(int X,int Y);
	~Basket();

	void Start();
	void Update();
	void Stop();

private:
	int speed, posX, posY;
};

