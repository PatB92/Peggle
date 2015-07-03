#include "Canon.h"


Canon::Canon()
	: Sprite(Texture::CANON)
	, pivot(0.f,0.f,0.f)
	, rotationSpeed(0.f)
	, angle(0.f)
{
}

Canon::Canon(float x, float y)
	: Sprite(Texture::CANON)
	, pivot(0.f, (GetTextureInfos()->infos.Height/2), 0.f)
	, rotationSpeed(0.03f)
	, angle(0.f)
{
	SetPosition(x, y);
	SetPivot(pivot);

	
	//currentBall = new Ball(GetPosition().x * offset.x, GetPosition().y * offset.y, angle);
	//currentBall->SetVisible(false);
}

Canon::~Canon()
{
	delete currentBall;
}

void Canon::Update()
{
	float dt = gTimer->GetDeltaTime();

	if (gDInput->keyDown(DIK_LEFT))
	{
		rotationSpeed = -300.f;
		if (angle >= -180.f)
		{
			angle += rotationSpeed * dt;
			SetRotationDeg(0.f, 0.f, angle);
		}
	}

	if (gDInput->keyDown(DIK_RIGHT))
	{
		rotationSpeed = 300.f;
		if (angle < 0.f)
		{
			angle += rotationSpeed * dt;
			SetRotationDeg(0.f, 0.f, angle);
		}
	}
	
	if (gDInput->keyPressed(DIK_SPACE))
	{
		//if (!currentBall->IsVisible())
		{
			float a = angle * D3DX_PI/180;
			offset = D3DXVECTOR3(cos(a), sin(a), 0.f) * 50.f;
			currentBall = new Ball(GetPosition().x + offset.x, GetPosition().y + offset.y, a);
			//currentBall->SetPosition(offset.x, offset.y);
			//currentBall->SetVisible(true);
		}
	}

	std::cout << angle << std::endl;
}