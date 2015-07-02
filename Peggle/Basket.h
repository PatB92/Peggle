#pragma once

#include "Sprite.h"
#include "RessourceIDs.h"

class Basket :
	public Sprite
{
public:
	Basket();
	Basket(int x,int y);
	~Basket();

	void Start();
	void Update();
	void Stop();

private:
	float speed;
};

