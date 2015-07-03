#include "Bumper.h"


Bumper::Bumper()
	:Sprite(Texture::ID::BUMPER)
{
}

Bumper::Bumper(float x, float y)
	: Sprite(Texture::ID::BUMPER)
{
	SetPosition(x, y);
	
}


Bumper::~Bumper()
{
}

void Bumper::Update()
{

}
