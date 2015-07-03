#pragma once

#include "Sprite.h"
#include "RessourceIDs.h"

class Ball :
	public Sprite
{
public:
	Ball();
	Ball(float x, float y,D3DXVECTOR3 pivot,float angle);
	~Ball();

	void Start();
	void Update();
	void Stop();

private:
	float angle;
	
};

