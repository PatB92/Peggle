#pragma once
#include "Component.h"
#include "Engine.h"
#include "Component.h"
#include "Basket.h"
#include "Canon.h"
#include "Ball.h"
#include "Bumper.h"

class Peggle :
	public Component
{
private:
	Basket* basket;
	Canon* canon;
	Ball* ball;
	Bumper* bumper[28];

	float startX, startY;


public:
	Peggle();
	~Peggle();

	void Start();
	void Update();
	void Stop();
};
