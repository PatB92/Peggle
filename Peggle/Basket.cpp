#include "Basket.h"

Basket::Basket()
	: Sprite(Texture::BASKET)
	, speed (1000.f)
{
}

Basket::Basket(int x, int y)
	: Sprite(Texture::BASKET, x, y)
	, speed(1000.f)
{
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

	if (this->GetPosition().x >= 300.0f || this->GetPosition().x <= -450.0f)
	{
		 speed *= -1;
	}
	
	currentPos.x += speed * dt;
	SetPosition(currentPos.x, currentPos.y);
}

void Basket::Stop()
{ 
}
