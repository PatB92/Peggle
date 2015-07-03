#include "Basket.h"

Basket::Basket()
	: Sprite(Texture::BASKET)
	, speed(0.f)
	, angle(0.f)
	, pivot(0,0,0)
{
}

Basket::Basket(int x, int y)
	: Sprite(Texture::BASKET, x, y)
	, speed(250.f)
	, angle(180.f)
	, pivot((GetTextureInfos()->infos.Width / 2), (GetTextureInfos()->infos.Height / 2), 1.f)
{
	SetPivot(pivot);
	SetRotationDeg(0.f, 0.f, angle);
}

Basket::~Basket()
{
}

void Basket::Start()
{
}

void Basket::Update()
{
	float dt = gTimer->GetDeltaTime();
	D3DXVECTOR3 currentPos = GetPosition();

	// Bouncer sur les bord
	if (this->GetPosition().x >= 340.0f || this->GetPosition().x <= -340.0f)
	{
		 speed *= -1;
	}
	
	currentPos.x += speed * dt;
	SetPosition(currentPos.x, currentPos.y);
}

void Basket::Stop()
{ 
}
