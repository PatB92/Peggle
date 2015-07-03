#include "Ball.h"


Ball::Ball()
	:Sprite(Texture::BALL)
	, angle(0)
{
}

Ball::Ball(float x, float y,D3DXVECTOR3 pivot, float angle)
	: angle(angle)
{
	SetPosition(x, y);
	SetPivot(pivot);
}


Ball::~Ball()
{
}


void Ball::Start()
{

}

void Ball::Update()
{
	SetRotationDeg(0.f,0.f,angle);
	SetPosition(GetPosition().x, GetPosition().y - 100.0f * gTimer->GetDeltaTime());

}

void Ball::Stop()
{

}