#pragma once

#include "entity.h"

class paddlePlayer : public Entity
{
public:
	paddlePlayer(int playerNumber);
	void Update();
	
private:
	int playerNumber;
};