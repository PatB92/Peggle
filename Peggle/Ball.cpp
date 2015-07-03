#include "Ball.h"

Ball::Ball()
	:Sprite(Texture::ID::BALL)
	, angle(0)
	, speed(1000.0f)
{
}

Ball::Ball(float x, float y, float angle)
	: Sprite(Texture::ID::BALL)
	, angle(angle)
	, speed(1000.0f)
{
	SetPosition(x, y);
	SetPivot(D3DXVECTOR3(texInfos->infos.Width / 2, texInfos->infos.Height / 2, 0.f));
}

Ball::~Ball()
{
}

void Ball::Update()
{
	float dt = gTimer->GetDeltaTime();

	D3DXVECTOR3 currentPos = GetPosition();
	D3DXVECTOR3 dir = D3DXVECTOR3(cos(angle), sin(angle), 0.f);

	currentPos.x += dir.x * speed * dt;
	currentPos.y += dir.y * speed * dt;

	SetPosition(currentPos.x, currentPos.y);
}
