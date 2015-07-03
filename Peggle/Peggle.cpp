#include "Peggle.h"
#include "Sprite.h"
#include "Canon.h"
#include "RessourceIDs.h"
#include "Basket.h"
#include "Ball.h"

Peggle::Peggle()
{
	Textures->LoadTexture(Texture::BASKET, "basket.png");
	Textures->LoadTexture(Texture::CANON, "canon.png");
	Textures->LoadTexture(Texture::BALL, "ball.png");

	canon = new Canon(0,250);
	basket = new Basket(-100, -240);
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