#pragma once
#include "Component.h"
#include "Engine.h"
#include "Component.h"
#include "Basket.h"
#include "Canon.h"

class Peggle :
	public Component
{
private:
	Basket* basket;
	Canon* canon;

public:
	Peggle();
	~Peggle();

	void Start();
	void Update();
	void Draw();
	void Stop();
};
