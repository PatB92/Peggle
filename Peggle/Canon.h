#pragma once

#include "Sprite.h"
#include "RessourceIDs.h"

class Canon :
	public Sprite

{
public:
	Canon();
	~Canon();


	void Start();
	void Update();
	void Stop();


};

