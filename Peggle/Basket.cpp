#include "Basket.h"

Basket::Basket()
	: Sprite(Texture::BASKET)
	, speed (1)
{
}

Basket::Basket(int X, int Y)
	: Sprite(Texture::BASKET)
	, speed(1)
	, posX(X)
	, posY(Y)
{
	SetPosition(posX, posY);

}

Basket::~Basket()
{
}

void Basket::Start()
{

}

void Basket::Update()
{
	//gDInput->keyDown(DIK_)

	

	if (this->GetPosition().x >= 300.0f)
	{
		speed = -1;
	}

	if (this->GetPosition().x <= -450.0f)
	{
		speed = 1;
	}

	SetPosition(GetPosition().x + speed,posY);
}

void Basket::Stop()
{ 
}
