#include "Canon.h"


Canon::Canon()
	: Sprite(Texture::CANON)
	, pivot(0.f,0.f,0.f)
	, rotationSpeed(0.f)
	, angle(0.f)
	, leftPressed(false)
	, rightPressed(false)
	, canonHeadPos(0.f,0.f)
{
}

Canon::Canon(float x, float y)
	: Sprite(Texture::CANON)
	, pivot((GetTextureInfos()->infos.Width), (GetTextureInfos()->infos.Height), 1.f)
	, rotationSpeed(0.03f)
	, angle(0.f)
	, leftPressed(false)
	, rightPressed(false)
	, canonHeadPos((GetTextureInfos()->infos.Width), 0.f)
{
	SetPosition(x, y);
	SetPivot(pivot);
}


Canon::~Canon()
{

}


void Canon::Start()
{

}

void Canon::Update()
{
	checkInput();

	if (leftPressed)
	{
		rotationSpeed = -0.03f;
		if (angle >= -70.f)
		{
			angle += rotationSpeed;
			SetRotationDeg(0.f, 0.f, angle);
		}
	}

	if (rightPressed)
	{
		rotationSpeed = 0.03f;
		if (angle <= 70.f)
		{
			angle += rotationSpeed;
		}
	}
	SetRotationDeg(0.f, 0.f, angle);
}

void Canon::Stop()
{

}

void Canon::checkInput()
{
	if (gDInput->keyPressed(DIK_LEFT))
	{
		leftPressed = true;
	}
	else if (gDInput->keyReleased(DIK_LEFT))
	{
		leftPressed = false;
	}

	if (gDInput->keyPressed(DIK_RIGHT))
	{
		rightPressed = true;
	}
	else if (gDInput->keyReleased(DIK_RIGHT))
	{
		rightPressed = false;
	}

}

D3DXVECTOR3 Canon::Getpivot()
{
	return pivot;
}

float Canon::Getangle()
{
	return angle;
}

D3DXVECTOR2 Canon::GetcanonHeadPos()
{
	return canonHeadPos;
}
