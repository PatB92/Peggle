#pragma once

#include "Sprite.h"
#include "RessourceIDs.h"

class Canon :
	public Sprite

{
public:
	Canon();
	Canon(float x , float y);
	~Canon();


	void Start();
	void Update();
	void Stop();

	void checkInput();
	D3DXVECTOR3 Getpivot();
	D3DXVECTOR2 GetcanonHeadPos();
	float Getangle();


private:
	D3DXVECTOR3 pivot;
	float rotationSpeed, angle;
	bool leftPressed, rightPressed;
	D3DXVECTOR2 canonHeadPos;
};

