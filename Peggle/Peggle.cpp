#include "Peggle.h"
#include "Sprite.h"
#include "Canon.h"
#include "RessourceIDs.h"
#include "Basket.h"

Peggle::Peggle()
{
	Textures->LoadTexture(Texture::BASKET, "basket.jpg");
	Textures->LoadTexture(Texture::CANON, "canon.jpg");

	//canon = new Canon();

	basket = new Basket(10,-100);
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

void Peggle::Draw()
{
	
}

void Peggle::Stop()
{

}