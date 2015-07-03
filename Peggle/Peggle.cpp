#include "Peggle.h"
#include "Sprite.h"
#include "Canon.h"
#include "RessourceIDs.h"
#include "Basket.h"
#include "Ball.h"

Peggle::Peggle()
	: startX(-310)
	, startY(120)
{
	Textures->LoadTexture(Texture::BASKET, "basket.png");
	Textures->LoadTexture(Texture::CANON, "canon.png");
	Textures->LoadTexture(Texture::BALL, "ball.png");
	Textures->LoadTexture(Texture::BUMPER, "bumper.png");

	canon = new Canon(0,250);
	basket = new Basket(-100, -240);
	
	for (int i = 0; i < 28; i++)
	{
		if (i % 7 == 0 && i != 0)
		{
			startY -= 80;
			startX = -310;
		}

		bumper[i] = new Bumper(startX,startY);
		startX += 100;
	}
}



Peggle::~Peggle()
{
	delete basket;
}

void Peggle::Start()
{

}

void Peggle::Update()
{
	
}

void Peggle::Stop()
{

}