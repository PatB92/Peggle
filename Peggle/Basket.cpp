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
	D3DXVECTOR3 currentPos = GetPosition();

	////gDInput->keyDown(DIK_)
	//if (this->GetPosition().x >= 300.0f)
	//{
	//	 speed = -1;
	//}
	//
	//if (this->GetPosition().x <= -450.0f)
	//{
	//	speed = 1;
	//}
	//

	float dt = gTimer->GetDeltaTime();
	currentPos.x += speed * dt;

	std::cout << "X: " << currentPos.x << "Y: " << currentPos.y << std::endl;
	
	SetPosition(currentPos.x, currentPos.y);
}

void Basket::Stop()
{ 
}
