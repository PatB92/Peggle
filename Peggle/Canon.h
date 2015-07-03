#pragma once

#include "Sprite.h"
#include "RessourceIDs.h"

#include "Ball.h"

class Canon :
	public Sprite
{
public:
	Canon();
	Canon(float x , float y);
	~Canon();

	// Inherited
	void Update();

private:
	float rotationSpeed, angle;
	D3DXVECTOR3 pivot;
	D3DXVECTOR3 offset;
	Ball* currentBall;

};

